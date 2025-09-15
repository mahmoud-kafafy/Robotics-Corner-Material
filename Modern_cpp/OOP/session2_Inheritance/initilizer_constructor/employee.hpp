#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <string>
#include <iostream>

class Employee {
private:
    int id;
    std::string name;

    // constant and reference members
    const int companyId;          
    const std::string& companyName;  

public:
    // Constructor with initializer list (required for const and reference)
    Employee(int empId, const std::string& empName, int compId, const std::string& compName);

    // Function to print info
    void display() const;
};

#endif // EMPLOYEE_HPP
