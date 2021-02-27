
const grpc = require('@grpc/grpc-js');
const protoLoader = require('@grpc/proto-loader');
import {put_kv} from "./kv_request";
import config from "../server/config";
const PROTO_PATH = config.SERVICE_PATH_PROTOS + '/cloudflare.proto';


async function push_kv(call, callback) {

    console.log("push_kv() run");
    console.log(call);
    let status: boolean = await put_kv({
        account: call.request.cloudflare_account,
        namespace: call.request.cloudflare_namespace,
        email: call.request.cloudflare_email,
        auth_key: call.request.cloudflare_auth_key,
        key: call.request.key,
        value: call.request.value, 
    });
    callback(null, {
        status: status
    });

}
function add_service(server: any) {
    let packageDefinition = protoLoader.loadSync(
        PROTO_PATH,
        {
            keepCase: true,
            longs: String,
            enums: String,
            defaults: true,
            oneofs: true
        }
    );
    let proto = grpc.loadPackageDefinition(packageDefinition).logo;
    server.addService(proto.CloudflareProto.service, {push_kv: push_kv});
}


export default add_service;