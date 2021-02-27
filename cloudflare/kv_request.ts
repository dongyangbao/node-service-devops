import fetch from "isomorphic-fetch";

const account = "d2a13a9ca96adbdfab8fb32b6f53d437";
const namespace = "3a0e869c077c47a5bde398024370612e";
const email = "besomist@gmail.com"
const auth_key = "02e3ebe21230465c296cd0a68229acc108e61";

const put_kv = async ({account, namespace, email, auth_key, key, value}: {account: string, namespace: string, email: string, auth_key: string, key: string, value: any}): Promise<boolean> => {
    let status: boolean = false;
    try {
        const res = await fetch(`https://api.cloudflare.com/client/v4/accounts/${account}/storage/kv/namespaces/${namespace}/values/${key}`, {
            method: "PUT",
            headers: {
                'X-Auth-Email': email,
                'X-Auth-Key': auth_key,
                'Content-Type': 'text/plain',
            },
            body: value,
            
        });
        const data = await res.json();
        console.log(data);
        status = data["success"];
    } catch(e) {
        status = false;
    }
    return status;
}


export {put_kv};