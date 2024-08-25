//
// Created by user on 07.05.2024.
//

#include "TeamLeader.h"

#include <utility>

TeamLeader::TeamLeader(int id, const std::string &name, int workTime, int salary,
                       Positions position,
                       std::shared_ptr<const Project> project,
                       std::vector<std::shared_ptr<const Programmer>>& team) :
                       Programmer(id, name,workTime, salary, position, std::move(project)),
                       team(team) {}

void TeamLeader::set_payment_for_worker(double x) {
    payment_for_worker = x;
}
void TeamLeader::add_programmer_to_team(const std::shared_ptr<const Programmer>& programmer) {
    team.push_back(programmer);
}

double TeamLeader::bonus_for_worker() const {
    return payment_for_worker * team.size();
}


double TeamLeader::calc_salary() const {
    return calc_base_salary()
    + calc_budget_part() + bonus_for_worker();
}




