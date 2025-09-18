#include <iostream>
#include <vector>
using namespace std;

// Abstract base class
class Animal {
public:
    // Pure virtual function (makes class abstract)
    virtual void makeSound() const = 0;

    // Virtual destructor (important for deleting derived objects via base pointer)
    virtual ~Animal() {
        cout << "Animal destroyed" << endl;
    }
};

// Derived classes
class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "Woof! Woof!" << endl;
    }
    ~Dog() {
        cout << "Dog destroyed" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() const override {
        cout << "Meow!" << endl;
    }
    ~Cat() {
        cout << "Cat destroyed" << endl;
    }
};

class Cow : public Animal {
public:
    void makeSound() const override {
        cout << "Moo!" << endl;
    }
    ~Cow() {
        cout << "Cow destroyed" << endl;
    }
};

// Function to play sounds from all animals
void playSounds(const vector<Animal*>& animals) {
    for (auto animal : animals) {
        animal->makeSound(); // polymorphic call
    }
}

int main() {
    vector<Animal*> animals;

    // Create objects dynamically
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Cow());

    // Play sounds
    playSounds(animals);

    // Clean up memory (calls virtual destructor correctly)
    for (auto animal : animals) {
        delete animal;
    }

    return 0;
}
