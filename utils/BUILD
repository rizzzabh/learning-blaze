load("@rules_cc//cc:defs.bzl", "cc_library", "cc_test")

cc_library(
    name = "checker_lib",
    srcs = ["checker.cc"],
    hdrs = ["checker.h"],
    visibility = ["//main:__pkg__"],
)


cc_test(
    name = "checker_test",
    srcs = ["checker_test.cc"],
    deps = [
        ":checker_lib",               # Link our local checker logic
        "@googletest//:gtest_main",   # Link the external GoogleTest runner
    ],
)