
const grpc = require('@grpc/grpc-js');
const protoLoader = require('@grpc/proto-loader');
import LogoData from "./logo_data";
import config from "../server/config";
const PROTO_PATH = config.SERVICE_PATH_PROTOS + '/logodata.proto';


async function get_data(call, callback) {
    let logodata = new LogoData();

    console.log("get_data() run");
    console.log(call);
    let data = await logodata.get_data({
        codeforces: call.request.codeforces,
        topcoder: call.request.topcoder,
        nike: {
            username: call.request.nike_username,
            password: call.request.nike_password,
        }
    });
    console.log("get_data() finish");
    callback(null, {
        codeforces: data.codeforces,
        topcoder: data.topcoder,
        nike_distance: data.nike.distance,
        nike_activities: data.nike.activities,
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
    server.addService(proto.LogoDataProto.service, {get_data: get_data});
}


export default add_service;