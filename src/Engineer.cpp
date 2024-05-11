//
// Created by user on 03.05.2024.
//
#include "Engineer.h"

Engineer::Engineer(int id, const std::string &name, int workTime,
                   int salary, Positions position,
                   const Project *project) :
                   Personal(id, name, position, workTime, salary),
                   project(project) {}

void Engineer::set_budget_part(double x) {
    budget_part = x;
}
double Engineer::calc_budget_part() const {
    if (budget_part != 0)
        return project->get_budget() / budget_part;
    return 0;
}
double Engineer::calc_salary() const {
    return calc_base_salary() + calc_budget_part() + calc_bonus_salary();
}

void Engineer::set_project(const Project* new_project) {
    project = new_project;
}

void Engineer::print_info() const {
    Personal::print_info();
    std::cout<<project->get_id()<<std::endl;
}







