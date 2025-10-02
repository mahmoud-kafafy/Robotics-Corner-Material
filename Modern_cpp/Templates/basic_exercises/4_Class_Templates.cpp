template <typename T>
class Box {
private:
    T value;
public:
    Box(T v) : value(v) {}
    T getValue() { return value; }
};

int main() {
    Box<int> intBox(10);
    Box<string> strBox("Hello");

    cout << intBox.getValue() << endl;  // 10
    cout << strBox.getValue() << endl;  // Hello
}
