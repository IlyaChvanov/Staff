//
// Created by user on 07.05.2024.
//

#ifndef STAFFDEMO_TEAMLEADER_H
#define STAFFDEMO_TEAMLEADER_H
#include "Programmer.h"

class TeamLeader : public Programmer, public Heading {
 public:
    TeamLeader(int id, const std::string& name,
               int workTime, int salary, Positions position,
               const Project* project, std::vector<const Programmer*>& team);
    void set_payment_for_worker(double x);
    double bonus_for_worker() const override;
    void add_programmer_to_team(const Programmer* programmer);
    void set_addition_for_premature(int x)=delete;
    void Prematurely()=delete;
    void Not_prematurely()=delete;
    double cals_pro_additions()=delete;
    double calc_salary() const override;

 private:
    double payment_for_worker = 1;
    std::vector<const Programmer*> team;

};


#endif //STAFFDEMO_TEAMLEADER_H
