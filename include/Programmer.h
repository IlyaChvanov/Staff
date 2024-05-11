//
// Created by user on 04.05.2024.
//

#ifndef STAFFDEMO_PROGRAMMER_H
#define STAFFDEMO_PROGRAMMER_H

#include "Engineer.h"

class Programmer : public Engineer {
 public:
    using Engineer :: Engineer;
    void set_addition_for_premature(int addition_for_premature);
    void Prematurely();
    void Not_prematurely();
    double calc_pro_additions(int bonus) const override;
    double calc_bonus_salary() const override;

 private:
    int addition_for_premature = 10;
    bool is_prematurely = false;
};


#endif //STAFFDEMO_PROGRAMMER_H
