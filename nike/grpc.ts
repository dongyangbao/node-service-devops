
const grpc = require('@grpc/grpc-js');
const protoLoader = require('@grpc/proto-loader');
import Nike from "./nike";
import config from "../server/config";
const PROTO_PATH = config.SERVICE_PATH_PROTOS + '/nike.proto';
let nike = new Nike("bedawnzfb@126.com", "39881531Bg");



async function get_data(call, callback) {
    console.log("get_data() run");
    let data = await nike.get_data();
    console.log("activities: ", data["activities"]);
    console.log("get_data() finish");
    callback(null, {activities: data['activities']});
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
    let hello_proto = grpc.loadPackageDefinition(packageDefinition).nike;
    server.addService(hello_proto.NikeProto.service, {get_data: get_data});
}


export default add_service;