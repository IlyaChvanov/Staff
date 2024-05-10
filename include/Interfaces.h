#ifndef INCLUDE_INTERFACES_H_
#define INCLUDE_INTERFACES_H_
class Heading {
 public:
    virtual ~Heading() = default;
    virtual double bonus_for_worker() const = 0;
};

class WorkBaseTime {
 public:
    virtual ~WorkBaseTime() = default;
    virtual double calc_bonus_salary() const = 0;
    virtual double calc_base_salary() const = 0;
};

class ProjectBudget {
 public:
    virtual ~ProjectBudget() = default;;
    virtual double calc_budget_part() const = 0;
    virtual int calc_pro_additions(int bonus) const = 0;
};

#endif  // INCLUDE_INTERFACES_H_
