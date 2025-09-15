#ifndef MANAGER_H
#define MANAGER_H

#include "employee.hpp"

enum Decision { HIRE, FIRE };

class Manager : public Employee {
public:
    Manager(const std::string& n = "Manager", int i = 0, int s = 0);

    void TakeDecision(Employee& emp, Decision d);
    void setRaise(Employee& emp, int raise);  // NEW
};

#endif
