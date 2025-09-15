
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>

class Employee
{
    private:
    int id_;
    std::string name_;
    std::string department_;
    int salary_;

    public:
    //function prototype
    Employee ();  //default
    Employee (int id , std::string name,std::string department,int salary);  //paramterized
    void setId(int id);
    void setSalary(int salary);
    void setName(std::string name);
    int getId ();
    std::string getName();
    int getSalary();
}; 


#endif