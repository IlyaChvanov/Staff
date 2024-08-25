//
// Created by user on 07.05.2024.
//

#include "ProjectManager.h"
#include <iostream>
#include <utility>

ProjectManager::ProjectManager(int id, const std::string &name,
                               Positions position,
                               std::vector<std::shared_ptr<const Employee>>& team,
                               std::shared_ptr<const Project> project) :
        Employee(id, name, position),
        team(team), project(std::move(project)) {}


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

void ProjectManager::set_project(std::shared_ptr<const Project> new_project) {
    project = std::move(new_project);
}

double ProjectManager::bonus_for_worker() const {
    return payment_for_worker * team.size();
}

double ProjectManager::calc_salary() const {
    return calc_budget_part() + calc_pro_additions(0);
}

double ProjectManager::calc_budget_part() const {
    return budget_part * project->get_budget();
}

double ProjectManager::calc_pro_additions(int bonus) const {
    return bonus_for_worker();
}




