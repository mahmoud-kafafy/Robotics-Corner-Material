#include "employee.hpp"

// Constructor
Employee::Employee(const std::string& n, int i, int s, bool h)
    : name(n), id(i), salary(s), hired(h) {}

// Setters
void Employee::setName(const std::string& n) { name = n; }
void Employee::setId(int i) { id = i; }
void Employee::setSalary(int s) { salary = s; }
void Employee::setHired(bool h) { hired = h; }

// Getters
std::string Employee::getName() const { return name; }
int Employee::getId() const { return id; }
int Employee::getSalary() const { return salary; }
bool Employee::isHired() const { return hired; }

// Display
void Employee::display() const {
    std::cout << "Employee[ID: " << id 
              << ", Name: " << name
              << ", Salary: " << salary
              << ", Status: " << (hired ? "Hired" : "Fired")
              << "]" << std::endl;
}
