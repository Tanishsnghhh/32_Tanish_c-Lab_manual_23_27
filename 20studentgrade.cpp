// program to manage grades of students in a classroom
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    char grade[5], averageGrade;
    int marks[5], numOfSubjects;

public:
    Student() {
        cout << "Enter name of student: ";
        getline(cin, name);
    }

    void addGrade() {
        cout << "Enter number of subjects: ";
        cin >> numOfSubjects;
        for (int i = 0; i < numOfSubjects; i++) {
            cout << "Enter grade for subject " << i + 1 << " (A,B,C,D,E,F): ";
            cin >> grade[i];
        }
    }

    void calculateAverage() {
        int sum = 0;
        for (int i = 0; i < numOfSubjects; i++) {
            switch (toupper(grade[i])) {
                case 'A':
                    marks[i] = 100;
                    break;
                case 'B':
                    marks[i] = 90;
                    break;
                case 'C':
                    marks[i] = 80;
                    break;
                case 'D':
                    marks[i] = 70;
                    break;
                case 'E':
                    marks[i] = 60;
                    break;
                default:
                    marks[i] = 50;
            }
            sum += marks[i];
        }

        int avg = sum / numOfSubjects;

        if (avg > 90) {
            averageGrade = 'A';
        } else if (avg > 80) {
            averageGrade = 'B';
        } else if (avg > 70) {
            averageGrade = 'C';
        } else if (avg > 60) {
            averageGrade = 'D';
        } else if (avg > 50) {
            averageGrade = 'E';
        } else {
            averageGrade = 'F';
        }
    }

    void showDetails() {
        cout << endl
             << "Name of Student: " << name << endl;
        cout << "Grades: ";
        for (int i = 0; i < numOfSubjects; i++) {
            cout << (char)toupper(grade[i]) << " ";
        }
        cout << endl
             << "Average grade: " << averageGrade << endl;
    }

    ~Student() {
        cout << "Destructor is called." << endl;
    }
};

int main() {
    Student student;
    student.addGrade();
    student.calculateAverage();
    student.showDetails();
    return 0;
}
