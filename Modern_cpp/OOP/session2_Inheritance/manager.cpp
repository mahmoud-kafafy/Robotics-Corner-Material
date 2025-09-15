#include "manager.hpp"
#include <iostream>

Manager::Manager(const std::string& n, int i, int s)
    : Employee(n, i, s, true) {}

void Manager::TakeDecision(Employee& emp, Decision d) {
    if (d == HIRE) {
        emp.setHired(true);
        std::cout << "Decision taken: HIRE " << emp.getName() << std::endl;
    } 
    else if (d == FIRE) {
        emp.setHired(false);
        std::cout << "Decision taken: FIRE " << emp.getName() << std::endl;
    }
}

void Manager::setRaise(Employee& emp, int raise) {
    if (emp.isHired()) {
        int newSalary = emp.getSalary() + raise;
        emp.setSalary(newSalary);
        std::cout << "Manager raised salary of " << emp.getName() 
                  << " by " << raise 
                  << ". New salary = " << newSalary << std::endl;
    } else {
        std::cout << "Cannot raise salary. " << emp.getName() 
                  << " is not hired." << std::endl;
    }
}
