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
#include <map>

using std::vector;
class Factory {
 public:
    static const inline std::map<std::string, Positions> string_to_enum = {
            {"programmer", Positions::programmer},
            {"team_leader", Positions::team_leader},
            {"project_manager", Positions::project_manager},
            {"senior_manager", Positions::senior_manager},
            {"cleaner", Positions::cleaner},
            {"driver", Positions::driver},
            {"tester", Positions::tester}

    };

    void Make_staff();
    vector<Employee*> staff;
    vector<Project*> projects;
 private:
    void read_staff(std::string& path);
    void read_projects(std::string& path);
};

#endif //STAFFDEMO_FACTORY_H
