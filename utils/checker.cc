#include "utils/checker.h"

bool check_answer(const std::string& expected, const std::string& actual) {
    // In a real judge, this would ignore trailing whitespaces, etc.
    return expected == actual;
}