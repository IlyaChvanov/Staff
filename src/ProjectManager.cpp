//
// Created by user on 07.05.2024.
//

#include "ProjectManager.h"
#include <iostream>

void ProjectManager::print_info() const {
    Employee::print_info();
    std::cout<<"team: "<<std::endl;
    for (const auto subordinate : team) {
        std::cout<<'\t';
        std::cout<<subordinate->get_id()<<' '<<subordinate->get_name()<<'\n';
    }
}

void ProjectManager::set_payment_for_worker(double x) {
    payment_for_worker = x;
}

void ProjectManager::set_budget_part(double x) {
    budget_part = x;
}

void ProjectManager::set_project(const Project *new_project) {
    project = new_project;
}

double ProjectManager::bonus_for_worker() const {
    return payment_for_worker * team.size();
}

double ProjectManager::calc_salary() const {
    return project->get_budget() * budget_part + bonus_for_worker();
}

ProjectManager::ProjectManager(int id, const std::string &name,
                               Positions position,
                               std::vector<const Employee*>& team,
                               const Project* project) :
                               Employee(id, name, position),
                               team(team), project(project) {}



