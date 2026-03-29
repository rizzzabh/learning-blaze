load("@rules_proto//proto:defs.bzl", "proto_library")
load("@rules_cc//cc:defs.bzl", "cc_proto_library")

# 1. This rule parses the raw .proto file
proto_library(
    name = "submission_proto",
    srcs = ["submission.proto"],
    visibility = ["//visibility:public"],
)

# 2. This rule takes the parsed proto and generates C++ classes
cc_proto_library(
    name = "submission_cc_proto",
    deps = [":submission_proto"],
    visibility = ["//visibility:public"],
)