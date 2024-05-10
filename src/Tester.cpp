//
// Created by user on 04.05.2024.
//

#include "Tester.h"

void Tester::set_found_errors(size_t errors) {
    found_errors = errors;
}

void Tester::increment_errors() {
    found_errors++;
}

void Tester::decrement_errors() {
    found_errors--;
}

int Tester::calc_pro_additions(int payment_for_error) const {
    return payment_for_error * found_errors;
}