cmake_minimum_required(VERSION 3.5.1)
include(${SERVICE_PATH_CMAKE}/proto.cmake)

file(GLOB PROTO_FILES *.proto)
set(_PROTO_LIB_PREFIX "proto")
# Include generated *.pb.h files
file(MAKE_DIRECTORY ${SERVICE_PATH_PROTOS_INCLUDE})
include_directories("${SERVICE_PATH_PROTOS_INCLUDE}")

foreach(_PROTO IN LISTS PROTO_FILES)
    get_filename_component(_PROTO_NAME ${_PROTO} NAME_WE)
    get_filename_component(_PROTO_PATH ${_PROTO} PATH)
    set(_PROTO_SRCS "${SERVICE_PATH_PROTOS_INCLUDE}/${_PROTO_NAME}.pb.cc")
    set(_PROTO_HDRS "${SERVICE_PATH_PROTOS_INCLUDE}/${_PROTO_NAME}.pb.h")
    set(_GRPC_SRCS "${SERVICE_PATH_PROTOS_INCLUDE}/${_PROTO_NAME}.grpc.pb.cc")
    set(_GRPC_HDRS "${SERVICE_PATH_PROTOS_INCLUDE}/${_PROTO_NAME}.grpc.pb.h")
    set(_LIB_NAME "${_PROTO_LIB_PREFIX}_${_PROTO_NAME}")
 
    # Generated sources
    add_custom_command(
        OUTPUT "${_PROTO_SRCS}" "${_PROTO_HDRS}" "${_GRPC_SRCS}" "${_GRPC_HDRS}"
        COMMAND ${_PROTOBUF_PROTOC}
        ARGS
            --grpc_out "${SERVICE_PATH_PROTOS_INCLUDE}"
            --cpp_out "${SERVICE_PATH_PROTOS_INCLUDE}"
        -I "${_PROTO_PATH}"
        --plugin=protoc-gen-grpc="${_GRPC_CPP_PLUGIN_EXECUTABLE}"
        "${_PROTO}"
        DEPENDS "${_PROTO}")

    # hw_grpc_proto
    
    add_library(${_LIB_NAME}
    ${_PROTO_SRCS}
    ${_PROTO_HDRS}
    ${_GRPC_SRCS}
    ${_GRPC_HDRS})

    target_link_libraries(${_LIB_NAME}
    ${_REFLECTION}
    ${_GRPC_GRPCPP}
    ${_PROTOBUF_LIBPROTOBUF})

    list(APPEND SERVICE_LIB_LISTS ${_LIB_NAME})
    message(STATUS "generate grpc: ${_LIB_NAME}")
endforeach(_PROTO)

#list(APPEND SERVICE_LIB_LISTS ${_REFLECTION})
#list(APPEND SERVICE_LIB_LISTS ${_GRPC_GRPCPP})
#list(APPEND SERVICE_LIB_LISTS ${_PROTOBUF_LIBPROTOBUF})

set(SERVICE_LIB_LISTS ${SERVICE_LIB_LISTS} PARENT_SCOPE)

message(STATUS "@@@###${SERVICE_LIB_LISTS}")