#include <iostream>
#include <vector>
#include "employee.hpp"
#include "manager.hpp"

void giveSalary(std::vector<Employee>& employees) {
    for (auto& emp : employees) {
        if (emp.isHired()) {
            std::cout << emp.getName() << " received salary " << emp.getSalary() << std::endl;
        } else {
            std::cout << emp.getName() << " is not hired, no salary." << std::endl;
        }
    }
}

int main() {
    Employee emp1("Alice", 1, 800);
    Employee emp2("Bob", 2, 1200);
    Employee emp3("Charlie", 3, 1500);

    std::vector<Employee> employees{emp1, emp2, emp3};
    giveSalary(employees);

    Manager m("John", 100, 3000);

    m.TakeDecision(emp1, FIRE);
    m.TakeDecision(emp1, HIRE);

    // 🔹 Give Alice a raise
    m.setRaise(emp1, 200);

    emp1.display();
    emp2.display();
    emp3.display();

    return 0;
}
