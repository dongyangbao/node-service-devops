import fetch from "isomorphic-fetch";
import Nike from "../nike/nike";

class LogoData {
    private nike: Nike;
    public async get_codeforces_score(username: string): Promise<number> {
        var score = -1;
        try {
            const res = await fetch(`https://codeforces.com/api/user.info?handles=${username}`, {
                method: "GET",
            });
            const data = await res.json();
            score = data["result"][0]['rating'];
        } catch(e) {
            score = -1;
        }
        console.log("get_codeforces_score", score);
        return score;
    }

    private async get_topcoder_score(username: string): Promise<number> {
        let score = 0;
        try{
          const req = await fetch(`https://api.topcoder.com/v3/members/${username}/stats/history`, {
            method: 'GET',
            headers: { 'Content-Type': 'application/json' },
          });

            const data = await req.json();
            let history = data["result"]["content"][0]["DATA_SCIENCE"]["SRM"]["history"];
            history = history.sort((a, b)=> {
                if(a["date"] < b["date"]) return 1;
                return -1;
            });
            score = history[0]["rating"];
        } catch(e) {
            score = -1;
        }
        console.log("get_topcoder_score", score);
        return score;
    }

    private async get_nike_data(username: string, password: string): Promise<{[s: string]: number}> {
        let res = {
            "distance": -1,
            "activities": -1,
        };

        try {
            this.nike = new Nike(username, password);
            let data = await this.nike.get_data();
            res["distance"] = data["distance"];
            res["activities"] = data["activities"];
        } catch (e) {
            res["distance"] = -1;
            res["activities"] = -1;
        }

        return res;
    }

    public get_s({ab, }) {

    }

    public async get_data({codeforces, topcoder, nike}:{codeforces?: string, topcoder?: string, nike?: {username: string, password: string}}): Promise<{[s: string]: any}> {
        let data = {
            "codeforces": -1,
            "topcoder": -1,
            "nike": {
                "distance": -1,
                "activities": -1,
            },
        };
        try {
            console.log(codeforces, topcoder, nike);
            if (null != codeforces) {
                data["codeforces"] = await this.get_codeforces_score(codeforces);
            }
            if (null != topcoder) {
                data["topcoder"] = await this.get_topcoder_score(topcoder);
                
            }

            if (null != nike && null != nike["username"] && null != nike["password"]) {
                let nike_data = await this.get_nike_data(nike.username, nike.password);
                data["nike"]["distance"] = nike_data["distance"];
                data["nike"]["activities"] = nike_data["activities"];
            }
        } catch(e) {

        }

        return data;
    }
};


export default LogoData;