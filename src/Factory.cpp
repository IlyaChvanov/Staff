//
// Created by user on 03.05.2024.
//
#include "Factory.h"

using std::ifstream, std::vector, std::string;
void Factory::Make_staff() {
    setlocale(LC_ALL, "rus");

    ifstream staff_info("..//..//staff_info.txt");
    ifstream projects_info("..//..//projects_info.txt");
    vector<Employee*> staff;

    std::cout<<staff_info.is_open();

    while (!staff_info.eof()) {
        string st;
        getline(staff_info, st);
    }

    staff_info.close();
    projects_info.close();
}

