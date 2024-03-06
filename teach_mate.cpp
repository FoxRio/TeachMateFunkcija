#include <iostream>
#include <sstream>
#include <fstream>
#include "teach_mate.h"

std::map<int, bool> TeachMateFunction(std::string className){

    std::map<int, bool> permissions;

    if(className.size() != 3){
        std::cout << "Invalid class name" << std::endl;
        return permissions;
    }

    std::ifstream input_file(className+"_grades.txt");

    if(!input_file.is_open()){
        std::cout << "Input file not found" << std::endl;
        return permissions;
    }

    int current_student;
    std::string line;
    while (std::getline(input_file, line)) {
        std::stringstream ss(line);
        int int_input;
        ss >> current_student;
        float sum = 0;
        int c = 0;
        while(ss >> int_input){
            sum += int_input;
            c++;
        }
        if(c == 0){
            permissions[current_student] = false;
        }else{
            if(sum / (float)c < 8){
                permissions[current_student] = false;
            }else{
                permissions[current_student] = true;
            }
        }

    }

    return permissions;
}
