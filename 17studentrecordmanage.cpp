/* Write a program to manage student records. Create a class Student with attributes such as name, roll number, and marks. Implement 
methods for displaying student details, adding new students, and calculating the average marks of all students in the record system.*/
#include <iostream>
#include <string>
using namespace std;
class Student 
{
private:
    string studentName;
    int studentRoll;
    float studentMarks;

public:
    Student() {}
    Student(string n, int r, float m) {
        studentName = n;
        studentRoll = r;
        studentMarks = m;
    }

    void displayData() {
        cout << endl<< "Name of student: " << studentName << endl;
        cout << "Roll no of student: " << studentRoll << endl;
        cout << "Marks of student: " << studentMarks << endl;
    }
};
int main() {
    int numOfStudents, roll;
    float marks, sum = 0;
    string name;
    cout << "Enter number of students: ";
    cin >> numOfStudents;
    Student students[numOfStudents];
    for (int i = 0; i < numOfStudents; i++) {
        cout << "Enter name of student: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter roll number of student: ";
        cin >> roll;
    retry:
        cout << "Enter marks of student (out of 100): ";
        cin >> marks;
        if (marks > 100) {
            goto retry;
        }
        sum += marks;
        students[i] = Student(name, roll, marks);
    }
    double avg = sum / numOfStudents;
    for (int i = 0; i < numOfStudents; i++) {
        students[i].displayData();
    }
    cout << endl
         << "Sum of marks: " << sum << endl;
    cout << "Average of marks: " << avg << endl;
    return 0;
}