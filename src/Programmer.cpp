//
// Created by user on 04.05.2024.
//

#include "Programmer.h"

void Programmer::Prematurely() {
    is_prematurely = true;
}

void Programmer::Not_prematurely() {
    is_prematurely = false;
}

double Programmer::calc_pro_additions(int addition_for_premature)const {
    if(is_prematurely) {
        return addition_for_premature;
    }
    return 0;
}

void Programmer::set_addition_for_premature(int new_addition_for_premature) {
    addition_for_premature = new_addition_for_premature;
}

double Programmer::calc_bonus_salary() const {
    return calc_pro_additions(addition_for_premature);
}

