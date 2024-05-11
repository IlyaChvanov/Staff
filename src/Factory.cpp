//
// Created by user on 03.05.2024.
//
#include "Factory.h"

using std::ifstream, std::vector, std::string;
void Factory::read_staff(std::string& path) {
    ifstream staff_info(path);
    while (!staff_info.eof()) {
        vector<string> person;
        string field_of_employee;
        for (int i = 0; i < 6; i++) {
            getline(staff_info, field_of_employee);
            person.push_back(field_of_employee);
        }

        int id = std::stoi(person[0]);
        string name = person[1];
        int work_time = std::stoi(person[3]);
        int salary = std::stoi(person[2]);
        int project_id = std::stoi(person[5]);
        Positions position = string_to_enum.at(person[4]);
        Project *project = nullptr;

        for (const auto project1: projects) {
            if (project1->get_id() == project_id) {
                project = project1;
                break;
            }
        }

        vector<const Employee *> team_manager;
        vector<const Programmer *> team_programmer;
        vector<const Project *> projects_for_maneger;
        Employee *worker = nullptr;
        switch (position) {
            case Positions::programmer:
                worker = new Programmer(id, name, work_time, salary, position, project);
                staff.push_back(worker);
                break;

            case Positions::team_leader:
                worker = new TeamLeader(id, name, work_time, salary, position, project, team_programmer);
                staff.push_back(worker);
                break;

            case Positions::project_manager:
                worker = new ProjectManager(id, name, position, team_manager, project);
                staff.push_back(worker);
                break;

            case Positions::senior_manager:
                worker = new SeniorManager(id, name, position, team_manager, projects_for_maneger);
                staff.push_back(worker);
                break;

            case Positions::cleaner:
                worker = new Cleaner(id, name, position, work_time, salary);
                staff.push_back(worker);
                break;

            case Positions::driver:
                worker = new Driver(id, name, position, work_time, salary);
                staff.push_back(worker);
                break;

            case Positions::tester:
                worker = new Tester(id, name, work_time, salary, position, project);
                staff.push_back(worker);
                break;
        }

    }


}

void Factory::read_projects(std::string& path) {
    ifstream projects_info(path);
    while (!projects_info.eof()) {
        vector<string> st_project;
        string field_of_project;
        for (int i = 0; i < 3; i++) {
            getline(projects_info, field_of_project);
            st_project.push_back(field_of_project);
        }
        int id = std::stoi(st_project[0]);
        int budget = std::stoi(st_project[1]);
        int number_of_employees = std::stoi(st_project[2]);

        projects.push_back(new Project(id, budget, number_of_employees));
    }
}


void Factory::Make_staff() {
    string staff_info("..//..//staff_info.txt");
    string projects_info("..//..//projects_info.txt");

    read_projects(projects_info);
    read_staff(staff_info);
}



