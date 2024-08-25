//
// Created by user on 07.05.2024.
//

#ifndef STAFFDEMO_SENIORMANAGER_H
#define STAFFDEMO_SENIORMANAGER_H

#include "ProjectManager.h"

class SeniorManager : public ProjectManager {
 public:
    SeniorManager(int id, const std::string& name, Positions position,
                  std::vector<std::shared_ptr<const Employee>>& team,
                  std::vector<std::shared_ptr<const Project>>& projects);

    double calc_salary() const override;
    void print_info() const override;

 private:
    std::vector<std::shared_ptr<const Project>> projects;
};


#endif //STAFFDEMO_SENIORMANAGER_H
