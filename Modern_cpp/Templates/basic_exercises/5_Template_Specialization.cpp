template <typename T>
class Printer {
public:
    void print(T value) {
        cout << "Value: " << value << endl;
    }
};

// Specialization for bool
template <>
class Printer<bool> {
public:
    void print(bool value) {
        cout << (value ? "True" : "False") << endl;
    }
};

int main() {
    Printer<int> p1;
    p1.print(100);

    Printer<bool> p2;
    p2.print(true);
}
