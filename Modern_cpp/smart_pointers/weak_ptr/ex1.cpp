#include <iostream>
#include <memory>
using namespace std;

int main() {
    weak_ptr<int> weakNum;  // empty weak pointer (not owning anything)

    {
        auto sharedNum = make_shared<int>(10);  // create shared pointer
        weakNum = sharedNum;                    // weakly observe it

        cout << "Inside block:\n";
        cout << "use_count = " << sharedNum.use_count() << "\n";

        // Try to access the object through weak_ptr
        if (auto temp = weakNum.lock()) { // lock() makes a temporary shared_ptr
            cout << "Value = " << *temp << "\n";
        } else {
            cout << "Object expired.\n";
        }
    } // sharedNum destroyed here

    cout << "\nAfter block:\n";
    if (auto temp = weakNum.lock()) {
        cout << "Value = " << *temp << "\n";
    } else {
        cout << "Object expired (can't access).\n";
    }
}

// 🧠 Step-by-step explanation:

// weak_ptr<int> weakNum;
// → starts empty, doesn’t point to anything.

// auto sharedNum = make_shared<int>(10);
// → creates a shared pointer owning the integer 10.

// weakNum = sharedNum;
// → weak pointer now observes the shared pointer but does not increase the count.

// Inside the block:

// The object still exists, so weakNum.lock() succeeds and gives us a temporary shared_ptr to access the value.

// After the block:

// sharedNum is destroyed, so the object is deleted.

// Now weakNum.lock() fails (returns nullptr) → the object expired.
