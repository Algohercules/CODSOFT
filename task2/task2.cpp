#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "=== Simple Calculator ===" << endl;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Input operator
    cout << "Choose operation (+, -, *, /): ";
    cin >> op;

    // Perform calculation
    switch(op) {
        case '+':
            cout << "Result = " << num1 + num2 << endl;
            break;

        case '-':
            cout << "Result = " << num1 - num2 << endl;
            break;

        case '*':
            cout << "Result = " << num1 * num2 << endl;
            break;

        case '/':
            if(num2 != 0)
                cout << "Result = " << num1 / num2 << endl;
            else
                cout << "Error! Division by zero is not allowed." << endl;
            break;

        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}