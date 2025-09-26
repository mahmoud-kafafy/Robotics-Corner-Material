#include <iostream>
#include <vector>
using namespace std;

class Animal {
public:
    virtual void sound() { cout << "Some sound" << endl; }
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void sound() override { cout << "Woof!" << endl; }
};

class Cat : public Animal {
public:
    void sound() override { cout << "Meow!" << endl; }
};

int main() {
    vector<Animal*> zoo;

    zoo.push_back(new Dog());
    zoo.push_back(new Cat());

    for (Animal* a : zoo) {
        a->sound();  // Calls correct function (Woof! / Meow!)
    }

    // cleanup
    for (Animal* a : zoo) delete a;
}
/*

#include <iostream>
using namespace std;

class Dog {
public:
    void sound() { cout << "Woof!" << endl; }
};

class Cat {
public:
    void sound() { cout << "Meow!" << endl; }
};

int main() {
    Dog d;
    Cat c;

    d.sound(); // Woof!
    c.sound(); // Meow!

    // But if you want to store them in one list? Impossible.
    // You’d need two separate lists for dogs and cats.
}

*/