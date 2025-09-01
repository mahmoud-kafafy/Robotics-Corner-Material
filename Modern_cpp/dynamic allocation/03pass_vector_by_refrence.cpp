#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to input student names
void inputStudents(vector<string>& students, int n) {
    students.clear(); // make sure it's empty before adding
    cout << "Enter " << n << " student names:\n";
    for (int i = 0; i < n; i++) {   // can't make range based or students.size() becouse vector is empty so cant loop first time 
        string name;
        cin >> name;
        students.push_back(name);
    }
}

// Function to display student names
void displayStudents(const vector<string>& students) {
    cout << "Student names:\n";
    for (const string& name : students) {
        cout << "- " << name << endl;
    }
}

int main() {
    vector<string> students; // vector to store names
    int n;

    cout << "How many students? ";
    cin >> n;

    inputStudents(students, n);   // pass by reference
    displayStudents(students);    // pass by const reference

    return 0;
}
