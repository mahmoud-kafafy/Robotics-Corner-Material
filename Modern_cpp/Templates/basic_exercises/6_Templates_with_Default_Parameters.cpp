template <typename T = int>
class Calculator {
public:
    T add(T a, T b) {
        return a + b;
    }
};

int main() {
    Calculator<> c1;   // default type = int
    cout << c1.add(3, 4) << endl;

    Calculator<double> c2;
    cout << c2.add(2.5, 4.1) << endl;
}
