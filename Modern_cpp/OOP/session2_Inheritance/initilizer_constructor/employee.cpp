#include "Employee.hpp"

// Constructor initializer list is mandatory for const and reference members
Employee::Employee(int empId, const std::string& empName, int compId, const std::string& compName)
    : id(empId), name(empName), companyId(compId), companyName(compName) {
    // body can be empty because members are already initialized
}

void Employee::display() const {
    std::cout << "Employee ID: " << id << "\n"
              << "Name: " << name << "\n"
              << "Company ID: " << companyId << "\n"
              << "Company Name: " << companyName << "\n";
}
