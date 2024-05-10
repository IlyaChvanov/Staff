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


double Driver::calc_salary() const {
    return calc_bonus_salary() + calc_base_salary();
}


double Cleaner::calc_salary() const {
    return calc_base_salary();
}
