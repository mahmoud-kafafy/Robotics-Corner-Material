/*
⚖️ Main Difference

Without polymorphism → You must manually choose the type (Dog d; Cat c;) and handle each separately.

With polymorphism → You can work with many derived types through one base interface, making the code flexible, scalable, and easier to extend.
*/


#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {   // virtual function
        cout << "Some animal sound" << endl;
    }
    virtual ~Animal() {} // virtual destructor for cleanup
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();

    a1->sound();  // Output: Woof!  (runtime decides)
    a2->sound();  // Output: Meow!  (runtime decides)

    delete a1;
    delete a2;
}
