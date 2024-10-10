#include <iostream>
using namespace std;

int main() {
    char operation;
    float num1, num2;

    // Display available operations
    cout << "Select an operation to perform (+, -, *, /): ";
    cin >> operation;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform the selected operation
    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero is not allowed." << endl;
            break;
        default:
            cout << "Error: Invalid operation selected!" << endl;
            break;
    }

    return 0;
}

