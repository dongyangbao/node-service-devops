let grpc = require('@grpc/grpc-js');
import logo_data_add_service from "../logo_data/grpc";
import cloudflare_add_service from "../cloudflare/grpc";
import config from "./config";
/**
 * Implements the SayHello RPC method.
 */


/**
 * Starts an RPC server that receives requests for the Greeter service at the
 * sample server port
 */
function main() {
  var server = new grpc.Server();
  logo_data_add_service(server);
  cloudflare_add_service(server);
  server.bindAsync(config.SERVICE_SERVER_IP + ":" + config.SERVICE_SERVER_PORT, grpc.ServerCredentials.createInsecure(), () => {
    server.start();
  });
  
}

main();

export default main;