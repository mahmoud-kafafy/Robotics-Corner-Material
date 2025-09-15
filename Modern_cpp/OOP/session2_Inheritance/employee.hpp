#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>

class Employee {
protected:
    std::string name;
    int id;
    int salary;
    bool hired;

public:
    Employee(const std::string& n, int i, int s, bool h = true);

    // Setters
    void setName(const std::string& n);
    void setId(int i);
    void setSalary(int s);
    void setHired(bool h);

    // Getters
    std::string getName() const;
    int getId() const;
    int getSalary() const;
    bool isHired() const;

    void display() const;
};

#endif
