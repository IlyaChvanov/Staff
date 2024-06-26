//
// Created by user on 04.05.2024.
//

#ifndef STAFFDEMO_TESTER_H
#define STAFFDEMO_TESTER_H

#include "Engineer.h"

class Tester: public Engineer{
 public:
    using Engineer::Engineer;
    void set_found_errors(size_t errors);
    void increment_errors();
    void decrement_errors();
    double calc_pro_additions(int payment_for_error) const override;
    double calc_bonus_salary() const override;
 private:
    double payment_for_error = 2;
public:
    void setPaymentForError(double paymentForError);

private:
    size_t found_errors = 0;
};
#endif //STAFFDEMO_TESTER_H
