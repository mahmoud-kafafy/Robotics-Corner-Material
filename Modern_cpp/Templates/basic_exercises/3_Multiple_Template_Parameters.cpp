template <typename T1, typename T2>
void printSum(T1 a, T2 b) {
    cout << "Sum: " << a + b << endl;
}

int main() {
    printSum(5, 2.5);     // int + double
    printSum(3.2, 4.8);   // double + double
}
