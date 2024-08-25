//
// Created by user on 03.05.2024.
//
#include "Factory.h"

using std::ifstream, std::vector, std::string;
void Factory::read_staff(const std::string& path) {
  std::ifstream staff_info(path);
  while (!staff_info.eof()) {
    std::vector<std::string> person(6);
    for (int i = 0; i < 6; i++) {
      std::getline(staff_info, person[i]);
    }

    int id = std::stoi(person[0]);
    std::string name = person[1];
    int work_time = std::stoi(person[3]);
    int salary = std::stoi(person[2]);
    int project_id = std::stoi(person[5]);
    Positions position = string_to_enum.at(person[4]);
    std::shared_ptr<Project> project = nullptr;

    for (const auto& project1: projects) {
      if (project1->get_id() == project_id) {
        project = project1;
        break;
      }
    }

    std::vector<std::shared_ptr<const Employee>> team_manager;
    std::vector<std::shared_ptr<const Programmer>> team_programmer;
    std::vector<std::shared_ptr<const Project>> projects_for_manager;
    std::shared_ptr<Employee> worker = nullptr;

    switch (position) {
      case Positions::programmer:
        worker = std::make_shared<Programmer>(id, name, work_time, salary, position, project);
        break;

      case Positions::team_leader:
        worker = std::make_shared<TeamLeader>(id, name, work_time, salary, position, project, team_programmer);
        break;

      case Positions::project_manager:
        worker = std::make_shared<ProjectManager>(id, name, position, team_manager, project);
        break;

      case Positions::senior_manager:
        worker = std::make_shared<SeniorManager>(id, name, position, team_manager, projects_for_manager);
        break;

      case Positions::cleaner:
        worker = std::make_shared<Cleaner>(id, name, position, work_time, salary);
        break;

      case Positions::driver:
        worker = std::make_shared<Driver>(id, name, position, work_time, salary);
        break;

      case Positions::tester:
        worker = std::make_shared<Tester>(id, name, work_time, salary, position, project);
        break;
    }

    staff.push_back(worker);
  }
}

void Factory::read_projects(const std::string& path) {
  std::ifstream projects_info(path);
  while (!projects_info.eof()) {
    std::vector<std::string> st_project(3);
    for (int i = 0; i < 3; i++) {
      std::getline(projects_info, st_project[i]);
    }

    int id = std::stoi(st_project[0]);
    int budget = std::stoi(st_project[1]);
    int number_of_employees = std::stoi(st_project[2]);

    projects.push_back(std::make_shared<Project>(id, budget, number_of_employees));
  }
}

void Factory::Make_staff() {
  std::string staff_info("..//..//staff_info.txt");
  std::string projects_info("..//..//projects_info.txt");

  read_projects(projects_info);
  read_staff(staff_info);

}



