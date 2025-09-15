#include "employee.hpp"

Employee::Employee ()  //default
{
    std::cout << "i am default constructor" << std::endl;
    id_ = 1;
    name_ = "mahmoud";
    department_ = "Mechatronics";
    salary_ = 100;

}
Employee::Employee (int id , std::string name,std::string department,int salary)  //paramterized
{
    std::cout << "i am paramterized constructor" << std::endl;
    id_ = id;
    name_ = name;
    department_ = department;
    salary_ = salary;

}
void Employee::setId(int id)
{
    id_ = id;
}
void Employee::setSalary(int salary)
{
    salary_ = salary;

}
void Employee::setName(std::string name)
{
    name_ = name;

}
int Employee::getId ()
{
    return id_;
}
std::string Employee::getName()
{
    return name_;

}
int Employee::getSalary()
{
    return salary_;
}