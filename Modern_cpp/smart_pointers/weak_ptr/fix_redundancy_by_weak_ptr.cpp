#include <iostream>
#include <memory>
using namespace std;

class B; // forward declare

class A {
public:
    shared_ptr<B> b_ptr; // A owns B
    ~A() { cout << "A destroyed\n"; }
};

class B {
public:
    weak_ptr<A> a_ptr;   // B only observes A
    ~B() { cout << "B destroyed\n"; }
};

int main() {
    auto a = make_shared<A>();
    auto b = make_shared<B>();

    a->b_ptr = b;
    b->a_ptr = a;  // weak_ptr doesn’t increase ref count

    cout << "Exiting main...\n";
}
