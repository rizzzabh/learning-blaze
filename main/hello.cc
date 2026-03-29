#include <iostream>
#include <string>
#include "utils/checker.h" 

int main() {
    std::string expected_output = "42";
    std::string user_output = "42";

    std::cout << "Running submission..." << std::endl;
    
    if (check_answer(expected_output, user_output)) {
        std::cout << "Verdict: Accepted (AC)" << std::endl;
    } else {
        std::cout << "Verdict: Wrong Answer (WA)" << std::endl;
    }

    return 0;
}