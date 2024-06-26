#ifndef INCLUDE_PERSONAL_H_
#define INCLUDE_PERSONAL_H_
#include <iostream>
#include <string>
#include <utility>
#include "Employee.h"
#include"Interfaces.h"

class Personal : public Employee, public WorkBaseTime {
 public:
    Personal(int id, const std::string& name, Positions position,
             int workTime, int salary);
    void set_bonus(double new_bonus);
    double calc_base_salary() const override;
    double calc_salary() const override;
    void print_info() const override;
 protected:
    int work_time;
    double work_time_salary;
    double bonus = 0;
};

class Driver : public Personal {
 public:
    using Personal::Personal;
    double calc_bonus_salary() const override;
};

class Cleaner : public Personal {
 public:
    using Personal::Personal;
    double calc_bonus_salary() const override;
};
#endif  // INCLUDE_PERSONAL_H_
