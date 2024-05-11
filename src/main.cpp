//
// Created by user on 07.05.2024.
//
#include "Factory.h"
#include "clocale"

int main() {
    setlocale( LC_ALL , "russian_russia.866" );
    Factory Intel;
    Intel.Make_staff();
    for (const auto staff: Intel.staff) {
        staff->set_payment();
    }

    for (const auto staff: Intel.staff) {
        staff->print_info();
        std::cout<<std::endl;
    }
    return 0;
}