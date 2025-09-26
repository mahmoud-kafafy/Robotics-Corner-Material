#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
using namespace std;

class Person {
protected:
    string name;
public:
    Person(string n);
    virtual void displayInfo() = 0; // pure virtual
    virtual ~Person();
};

#endif
