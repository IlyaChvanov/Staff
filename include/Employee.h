#ifndef INCLUDE_EMPLOYEE_H_
#define INCLUDE_EMPLOYEE_H_

#include <string>
#include <vector>

enum Positions {
    programmer,
    team_leader,
    project_manager,
    senior_manager,
    cleaner,
    driver,
    tester,
};
class Project {
 public:
    Project(int id, int budget, int number_of_employees);
    int get_num_of_employees() const;
    int get_budget() const;
    int get_id() const;
 private:
    int id;
    int budget;
    int number_of_employees;
};

class Employee {
 public:
    Employee(int id, std::string name, Positions position);
    virtual ~Employee();
    [[nodiscard]] int get_id() const;
    [[nodiscard]] std::string get_name() const;
    [[nodiscard]] virtual double calc_salary() const = 0;
    virtual void print_info() const;
    void set_payment();

 protected:
    Positions position;
    double payment = 0;
    std::string name;
    int id;
    std::vector<std::string> enum_print = {"programmer",
                                           "team_leader",
                                           "project_manager",
                                           "senior_manager",
                                           "cleaner",
                                           "driver",
                                           "tester"};

};

#endif  // INCLUDE_EMPLOYEE_H_
