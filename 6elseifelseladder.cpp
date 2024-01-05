//Write a program that determines the grade of a student based on their marks of 5 subjects using if-else-if ladder
#include <iostream>
using namespace std;

int main() {
    float sub1, sub2, sub3, sub4, sub5;
    cout << "Enter marks of subject 1: ";
    cin >> sub1;
    cout << "Enter marks of subject 2: ";
    cin >> sub2;
    cout << "Enter marks of subject 3: ";
    cin >> sub3;
    cout << "Enter marks of subject 4: ";
    cin >> sub4;
    cout << "Enter marks of subject 5: ";
    cin >> sub5;

    float average = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;

    if (average >= 90) {
        cout << "Grade = A";
    } else if (average >= 80) {
        cout << "Grade = B";
    } else if (average >= 70) {
        cout << "Grade = C";
    } else if (average >= 60) {
        cout << "Grade = D";
    } else {
        cout << "Grade = F";
    }

    return 0;
}
