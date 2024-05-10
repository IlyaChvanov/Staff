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

double Programmer::cals_pro_additions()const {
    if(is_prematurely) {
        return addition_for_premature;
    }
    return 0;
}

double Programmer::calc_salary() const {
    return Engineer::calc_salary() + cals_pro_additions();
}

void Programmer::set_addition_for_premature(int new_addition_for_premature) {
    addition_for_premature = new_addition_for_premature;
}

