#include <iostream>
#include <string>
#include "utils/checker.h"

#include "proto/submission.pb.h" 

int main() {

    grading_system::Submission sub;
    

    sub.set_submission_id(101);
    sub.set_user_handle("tourist");
    sub.set_source_code("int main() { return 0; }");
    sub.set_language(grading_system::CPP);

    std::string serialized_data;
    sub.SerializeToString(&serialized_data);

    std::cout << "Successfully created submission for user: " << sub.user_handle() << std::endl;
    std::cout << "Serialized binary size: " << serialized_data.size() << " bytes!" << std::endl;

    return 0;
}