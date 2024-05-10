//
// Created by user on 07.05.2024.
//

#include <iostream>
#include "SeniorManager.h"

double SeniorManager::calc_salary() const {
    double salary = 0;
    for (const auto project : projects) {
        salary += project->get_budget() * budget_part;
    }
    salary += team.size() * payment_for_worker;
}

void SeniorManager::print_info() const {
    ProjectManager::print_info();
    std::cout<<"Projects id: "<<'\n';
    for (const auto project : projects) {
        std::cout<<project->get_id()<<", ";
    }
}

SeniorManager::SeniorManager(int id, const std::string &name, Positions position,
                             std::vector<const Employee *>& team,
                             std::vector<const Project*>& projects) :
                             ProjectManager(id, name, position, team, nullptr),
                             projects(projects) {}
