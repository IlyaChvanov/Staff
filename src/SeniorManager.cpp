//
// Created by user on 07.05.2024.
//

#include <iostream>
#include "SeniorManager.h"

double SeniorManager::calc_salary() const {
    double salary = 0;
    for (const auto& project : projects) {
        salary += project->get_budget() * budget_part;
    }
    salary+= team.size() * payment_for_worker;
    return salary;
}

void SeniorManager::print_info() const {
    ProjectManager::print_info();
    if (projects.empty()) {
      std::cout << "no projects" << std::endl;
      return;
    }
    std::cout<<"Projects id: "<<'\n';
    for (const auto& project : projects) {
        if (project.get()) {
          std::cout << project->get_id() << ", ";
        } else {
          std::cout << "no projects";
        }
    }
}

SeniorManager::SeniorManager(int id, const std::string &name, Positions position,
                             std::vector<std::shared_ptr<const Employee>>& team,
                             std::vector<std::shared_ptr<const Project>>& projects) :
                             ProjectManager(id, name, position, team, nullptr),
                             projects(projects) {}
