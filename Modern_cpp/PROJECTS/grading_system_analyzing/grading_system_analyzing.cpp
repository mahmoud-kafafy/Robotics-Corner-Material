#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ======================
// Namespace Example
// ======================
// A namespace groups related functions together.
// Here, utils contains helper functions for grade calculations.
namespace utils {
    // Function to calculate average grade
    double average(const vector<int>& grades) {
        if (grades.empty()) return 0.0;  // return 0 if no grades

        double sum = 0.0; // use double to avoid integer division
        for (int g : grades) {
            sum += g;  // add each grade to sum
        }
        return sum / grades.size();  // average = sum / count
    }

    // Function to get the highest grade
    int maxGrade(const vector<int>& grades) {
        int maxVal = grades[0]; // start with first grade
        for (int g : grades) if (g > maxVal) maxVal = g;
        return maxVal;
    }

    // Function to get the lowest grade
    int minGrade(const vector<int>& grades) {
        int minVal = grades[0]; // start with first grade
        for (int g : grades) if (g < minVal) minVal = g;
        return minVal;
    }
}

// ======================
// constexpr Example
// ======================
// Constants: maximum and minimum possible grade
constexpr int MAX_GRADE = 100;
constexpr int MIN_GRADE = 0;

// ======================
// Reference Example
// ======================
// Pass grade by reference so we can update it directly
void updateGrade(int& grade, int newValue) {
    grade = newValue;
}

// ======================
// Pointer Example
// ======================
// Function to print grades using pointer arithmetic
void printWithPointer(const int* arr, int size) {  
    cout << "Grades using pointer traversal: ";
    const int* ptr = arr; // pointer starts at first element
    for (int i = 0; i < size; i++) {
        cout << *ptr << " ";  // print value at pointer
        ptr++;                // move pointer to next element
    }
    cout << "\n";
}

// ======================
// Helper Functions
// ======================

// Enter grades for all students
void enterGrades(vector<int>& grades) {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    grades.clear();        // clear old grades
    grades.reserve(n);     // reserve memory for new grades

    for (int i = 0; i < n; i++) {
        int g;
        cout << "Enter grade for student " << (i + 1) << ": ";
        cin >> g;
        // Clamp values inside allowed range
        if (g > MAX_GRADE) g = MAX_GRADE;
        if (g < MIN_GRADE) g = MIN_GRADE;
        grades.push_back(g);  // add grade to vector
    }
}

// Show statistics (average, highest, lowest, passing count)
void showStatistics(const vector<int>& grades) {
    if (grades.empty()) {
        cout << "No grades entered yet!\n";
        return;
    }

    // Lambda to check if grade is passing
    auto isPassing = [](int g) { return g >= 50; };
    int passingCount = 0;
    for (int g : grades) if (isPassing(g)) passingCount++;

    cout << "\n=== Statistics ===\n";
    cout << "Average: " << utils::average(grades) << "\n";
    cout << "Highest: " << utils::maxGrade(grades) << "\n";
    cout << "Lowest : " << utils::minGrade(grades) << "\n";
    cout << "Passing students: " << passingCount << "\n";
}

// Update grade for a specific student
void updateGradeMenu(vector<int>& grades) {
    if (grades.empty()) {
        cout << "No grades entered yet!\n";
        return;
    }

    int idx, newVal;
    cout << "Enter student index (1 to " << grades.size() << "): ";
    cin >> idx;

    // Validate index
    if (idx < 1 || idx > (int)grades.size()) {
        cout << "Invalid index!\n";
        return;
    }

    cout << "Enter new grade: ";
    cin >> newVal;
    // Clamp values to stay within limits
    if (newVal > MAX_GRADE) newVal = MAX_GRADE;
    if (newVal < MIN_GRADE) newVal = MIN_GRADE;

    // Use reference to directly update grade in vector
    updateGrade(grades[idx - 1], newVal); 
    cout << "Grade updated!\n";
}

// Delete a grade for a student
void deleteGradeMenu(vector<int>& grades) {
    if (grades.empty()) {
        cout << "No grades entered yet!\n";
        return;
    }

    int idx;
    cout << "Enter student index to delete (1 to " << grades.size() << "): ";
    cin >> idx;

    // Validate index
    if (idx < 1 || idx > (int)grades.size()) {
        cout << "Invalid index!\n";
        return;
    }

    // Erase the grade at that index
    grades.erase(grades.begin() + (idx - 1));
    cout << "Grade deleted!\n";
}

// Show all grades
void showAllGrades(const vector<int>& grades) {
    cout << "\nCurrent grades: ";
    for (int g : grades) cout << g << " ";
    cout << "\n";
    // Also show grades using pointer traversal
    if (!grades.empty()) printWithPointer(&grades[0], grades.size());
}

// ======================
// Main Program
// ======================
int main() {
    vector<int> grades;  // store all grades in a vector

    while (true) {
        // Show main menu
        cout << "\n============================\n";
        cout << "   Welcome to Grade System  \n";
        cout << "============================\n";
        cout << "1. Enter grades\n";
        cout << "2. Show statistics\n";
        cout << "3. Update grade\n";
        cout << "4. Delete grade\n";
        cout << "5. Show all grades\n";
        cout << "0. Exit\n";
        cout << "Choose an option: ";

        int choice;
        cin >> choice;

        // Handle user choice
        switch (choice) {
            case 1: enterGrades(grades); break;
            case 2: showStatistics(grades); break;
            case 3: updateGradeMenu(grades); break;
            case 4: deleteGradeMenu(grades); break;
            case 5: showAllGrades(grades); break;
            case 0: cout << "Goodbye!\n"; return 0;
            default: cout << "Invalid choice!\n"; break;
        }
    }
}
