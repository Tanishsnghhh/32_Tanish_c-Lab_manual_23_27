// to find largest among three numbers using nested if else loop
#include <iostream>
using namespace std;

// main function
int main() 
{

    // input numbers from user
    int number1, number2, number3;
    cout << "Enter first number: ";
    cin >> number1;
    
    cout << "Enter second number: ";
    cin >> number2;

    cout << "Enter third number: ";
    cin >> number3;

    // check weather first number or second number or third number is bagger among them
    if (number1 >= number2) {
        if (number1 >= number3) {
            cout << number1 << " is bigger than " << number2 << " and " << number3 << endl;
        } else {
            cout << number3 << " is bigger than " << number1 << " and " << number2 << endl;
        }
    } else {
        if (number2 >= number3) {
            cout << number2 << " is bigger than " << number1 << " and " << number3 << endl;
        } else {
            cout << number3 << " is bigger than " << number1 << " and " << number2 << endl;
        }
    }
}