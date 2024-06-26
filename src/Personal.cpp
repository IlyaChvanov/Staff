//
// Created by user on 03.05.2024.
//
#include "Personal.h"

Personal::Personal(int id, const std::string& name,
                   Positions position,
                   int work_time,
                   int  work_time_salary):
                   Employee(id, name, position),
                   work_time(work_time),
                   work_time_salary(work_time_salary) {}


double Personal::calc_base_salary() const {
    return work_time * work_time_salary;
}

void Personal::print_info() const {
    Employee::print_info();
    std::cout<<"salary for hour: "<<work_time_salary<<std::endl;
}

void Personal::set_bonus(double new_bonus) {
    bonus = new_bonus;
}

double Personal::calc_salary() const {
    return calc_base_salary() + calc_bonus_salary();
}

double Driver::calc_bonus_salary() const {
    return bonus;
}

double Cleaner::calc_bonus_salary() const {
    return 0;
}
