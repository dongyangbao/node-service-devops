import puppeteer from 'puppeteer';
import fetch from "isomorphic-fetch";

const get_now_milliseconds = (): number => {
    return new Date().getTime();
}

/* class Nike
   Every private function not need deal with error, only to throw error.
*/
class Nike {
    private _username: string = "";
    private _password: string = "";
    private _access_token: string = "";
    private _refresh_token: string = "";
    /* expire millisecond time */
    private _expires_time: number = 0;


    constructor(username: string, password: string) {
        this._username = username;
        this._password = password;
    }

    static random_text(): string {
        let text = '';
        const possible = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789';
        for (let i = 0; i < 5; i++)
          text += possible.charAt(Math.floor(Math.random() * possible.length));
        return text;
    }

    static random_delay(min: number, max: number): number {
        return Math.floor(Math.random() * (max - min + 1) + min);
    }

    public access_token_is_expired(): boolean {
        if (this._expires_time <= get_now_milliseconds() - 60000) {
            return true;
        }
        return false;
    }

    public async get_data(): Promise<any> {
        return new Promise(async (resolve, reject) => {
            try {
                if (this.access_token_is_expired()) {
                    await this._login();
                }
                const res = await fetch("https://api.nike.com/plus/v3/lifetimeaggs/me/summary?format=json", {
                    method: "GET",
                    headers: {
                        "Authorization":"Bearer " + this._access_token,
                    },
                });
                const data = await res.json();
                resolve(data['lifetime']);
            } catch(err) {
                reject(err);
            }
        });
    }

    private async _login(): Promise<string> {
        return new Promise(async (resolve, reject) => {
            let browser: any = null;
            let timeout = setTimeout(async () => {
                timeout = null;
                try {
                    await browser.close();
                } catch (e) {
                    /* do nothing */
                }
                reject(Error('timeout'));
            }
            /* Set a login max time. */
            , 60000);
            try {
                browser = await puppeteer.launch({
                    headless: true,
                    args: ['--no-sandbox', '--disable-setuid-sandbox', '--disable-web-security', '--disable-infobars'],
                });
            } catch (err) {
                reject(err);
            }

            try {
                /* page init */
                const page = await browser.newPage();
                await page.setUserAgent(
                    'Mozilla/5.0 (Macintosh; Intel Mac OS X 11_0_1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/88.0.4324.146 Safari/537.36',
                );
                await page.setExtraHTTPHeaders({
                    'Accept-Language': 'zh-CN,zh;q=0.9,en;q=0.8,ja;q=0.7,zh-TW;q=0.6',
                });

                await page.evaluateOnNewDocument(() => {
                    // Overwrite the `plugins` property to use a custom getter.
                    Object.defineProperty(navigator, 'languages', {
                        get: () => ['en-US', 'en'],
                    });
                });

                await page.evaluateOnNewDocument(() => {
                    // Overwrite the `plugins` property to use a custom getter.
                    Object.defineProperty(navigator, 'plugins', {
                        // This just needs to have `length > 0` for the current test,
                        // but we could mock the plugins too if necessary.
                        get: () => [1, 2, 3],
                    });
                });

                await page.evaluateOnNewDocument(() => {
                    const originalQuery = window.navigator.permissions.query;
                    return window.navigator.permissions.query = (parameters) => (
                        parameters.name === 'notifications' ?
                            <Promise<PermissionStatus>>Promise.resolve({ state: Notification.permission }) :
                            originalQuery(parameters)
                        );
                });

                await page.evaluateOnNewDocument(() => {
                    // We can mock this in as much depth as we need for the test.
                    window.navigator["chrome"] = {
                        runtime: {},
                    };
                });

                /* try to visit */
                await page.goto('https://www.nike.com/login', {
                    waitUntil: 'networkidle0',
                });

                const emailSelector = '.nike-unite-text-input.emailAddress input';
                const inputs = [emailSelector, '.nike-unite-text-input.password input'];
                console.log("email");
                // random thing -> human behavior
                await page.type(inputs[0], Nike.random_text(), {
                    delay: Nike.random_delay(150, 250),
                });
                for (var i = 0; i < Nike.random_delay(6, 10); i++) {
                    await page.keyboard.press('Backspace', {
                        delay: Nike.random_delay(150, 250),
                    });
                }
            
                await page.type(inputs[0], this._username, {
                    delay: Nike.random_delay(200, 300),
                });
            
                await page.type(inputs[1], this._password, {
                    delay: Nike.random_delay(200, 300),
                });

                page.on('response', async response => {
                    if (response.url().indexOf('https://unite.nike.com/login') > -1
                        && response.request().method() === 'POST') {
                        try {
                            const data = await response.json();
                            this._access_token = data["access_token"];
                            this._refresh_token = data["refresh_token"];
                            this._expires_time = parseInt(data["expires"]) * 1000 + get_now_milliseconds() - 60;
                            try {
                                await browser.close();
                            } catch(e) {
                                /* do nothing */
                            }
                            await browser.close();
                            resolve(this._access_token);
                        } catch (err) {
                            reject(err);
                        }
                    }
                });

                page.on("error", async err => {
                    /* do nothing */
                });

                page.on('requestfailed', async request => {
                    /* do nothing */
                });

                const submitBtn = '.nike-unite-submit-button input';
                await page.waitForSelector(submitBtn);
                await page.click('.nike-unite-swoosh');
                await page.hover('.nike-unite-swoosh');
                await page.click('.view-header');
                await page.hover('.nike-unite-swoosh');
                await page.hover('.view-header');
                await page.click(submitBtn);

                console.log("submit");

            } catch (err) {
                try {
                    await browser.close();
                } catch (e) {
                    /* do nothing */
                }
                reject(err);
            }
        });
    }
};

export default Nike;