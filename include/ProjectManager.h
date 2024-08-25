//
// Created by user on 07.05.2024.
//

#ifndef STAFFDEMO_PROJECTMANAGER_H
#define STAFFDEMO_PROJECTMANAGER_H

#include "Employee.h"
#include "Interfaces.h"

#include <memory>

class ProjectManager: public Employee, public ProjectBudget, public Heading {
 public:
    ProjectManager(int id, const std::string& name, Positions position,
                   std::vector<std::shared_ptr<const Employee>>& team,
                   std::shared_ptr<const Project> project);
    double bonus_for_worker() const override;
    double calc_budget_part() const override;
    double calc_pro_additions(int bonus) const override;
    void set_payment_for_worker(double x);
    void set_budget_part(double x);
    void set_project(std::shared_ptr<const Project>);
    double calc_salary() const override;
    void print_info() const override;

 protected:
    std::vector<std::shared_ptr<const Employee>> team;
    double payment_for_worker = 1;
    double budget_part = 0.01;

 private:
   std::shared_ptr<const Project> project;
};


#endif //STAFFDEMO_PROJECTMANAGER_H
