//
// Created by user on 03.05.2024.
//
#include "Employee.h"
#include <iostream>
#include <utility>

Project::Project(int id, int budget, int number_of_employees) :
    id(id),
    budget(budget),
    number_of_employees(number_of_employees) {}

int Project::get_num_of_employees() const {
    return number_of_employees;
}

int Project::get_budget() const {
    return budget;
}

int Project::get_id() const {
    return id;
}

Employee::Employee(int id, std::string  name, Positions position) :
    id(id),
    name(std::move(name)),,
    position(position){}

int Employee::get_id() const {
    return id;
}

void Employee::set_payment() {
    payment = calc_salary();
}

void Employee::print_info() const {
    using std::cout, std::endl;
    cout<<"employee id: "<<id<<endl;
    cout<<"name: "<<name<<endl;
    cout<<"payment: "<<payment<<endl;
    cout<<"position: "<<position<<endl;

}

std::string Employee::get_name() const {
    return name;
}
