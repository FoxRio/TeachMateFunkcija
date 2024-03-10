//
// Created by davis on 06.03.2024.
//
#include "teach_mate.h"

int main() {
    std::string className = "10D"; // Set your class name here
    std::map<int, bool> permissions = TeachMateFunction(className);
    // Access the permissions map and print the results
    for (const auto& [student, allowed] : permissions) {
        std::cout << "Student " << student << " is ";
        if (allowed) {
            std::cout << "allowed" << std::endl;
        } else {
            std::cout << "not allowed" << std::endl;
        }
    }
    return 0;
}
