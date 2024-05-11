//
// Created by user on 03.05.2024.
//

#ifndef STAFFDEMO_FACTORY_H
#define STAFFDEMO_FACTORY_H
#include "Personal.h"
#include "Tester.h"
#include "TeamLeader.h"
#include "SeniorManager.h"

#include <fstream>
#include <iostream>
#include <vector>

using std::vector;
class Factory {
 public:
    void Make_staff();
    vector<Employee*> staff;
    vector<Project*> projects;
};

#endif //STAFFDEMO_FACTORY_H
