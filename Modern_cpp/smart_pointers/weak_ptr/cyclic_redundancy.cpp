#include <iostream>
#include <memory>
using namespace std;

class B; // forward declare

class A {
public:
    shared_ptr<B> b_ptr;
    ~A() { cout << "A destroyed\n"; }
};

class B {
public:
    shared_ptr<A> a_ptr;
    ~B() { cout << "B destroyed\n"; }
};

int main() {
    auto a = make_shared<A>();
    auto b = make_shared<B>();

    a->b_ptr = b;
    b->a_ptr = a;

    cout << "Exiting main...\n";
}


//No destructor messages appear — memory leak caused by circular ownership.

// weak_ptr lets one side “watch” the object without owning it.

// It doesn’t increase the reference count, so when all real owners (shared_ptrs) are gone, the object can be deleted safely.