// Created by user on 03.05.2024.
//

#ifndef STAFFDEMO_ENGINEER_H
#define STAFFDEMO_ENGINEER_H
#include "Personal.h"
#include "Interfaces.h"

class Engineer: public Personal, public ProjectBudget {
 public:
    Engineer(int id, const std::string& name,
             int workTime, int salary, Positions position,
             const Project* project);
    void set_project(const Project* project);
    void set_budget_part(double x);
    void print_info() const override;
    double calc_budget_part() const override;
    double calc_salary() const override;
 protected:
    double budget_part = 0;
    const Project* project;
};


#endif //STAFFDEMO_ENGINEER_H
