/* Write a program that implements a basic calculator. Use a class Calculator with methods to perform addition, subtraction, multiplication,
and division of two numbers. The program should allow the user to input two numbers and select an operation to perform. */
#include <iostream>
using namespace std;

class Calculator {
private:
    int operationChoice;
    float firstNumber, secondNumber;

public:
    void performCalculation() {
        while (true) {
            cout << "Enter first number: ";
            cin >> firstNumber;
            cout << "Enter second number: ";
            cin >> secondNumber;
            cout << "Calculator Menu: " << endl
                 << "1. Addition" << endl
                 << "2. Subtraction" << endl
                 << "3. Multiplication" << endl
                 << "4. Division" << endl
                 << "0. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> operationChoice;

            switch (operationChoice) {
                case 1:
                    performAddition(firstNumber, secondNumber);
                    break;
                case 2:
                    performSubtraction(firstNumber, secondNumber);
                    break;
                case 3:
                    performMultiplication(firstNumber, secondNumber);
                    break;
                case 4:
                    performDivision(firstNumber, secondNumber);
                    break;
                case 0:
                    return;
                default:
                    cout << "Invalid choice! Please enter a valid choice." << endl;
            }
        }
    }

    void performAddition(float x, float y) {
        cout << "Addition Result: " << x + y << endl;
    }

    void performSubtraction(float x, float y) {
        cout << "Subtraction Result: " << x - y << endl;
    }

    void performMultiplication(float x, float y) {
        cout << "Multiplication Result: " << x * y << endl;
    }

    void performDivision(float x, float y) {
        if (y == 0) {
            cout << "Division by zero is not allowed." << endl;
        } else {
            cout << "Division Result: " << x / y << endl;
        }
    }
};

int main() {
    Calculator calculatorObj;
    calculatorObj.performCalculation();
    return 0;
}
