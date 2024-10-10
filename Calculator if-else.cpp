#include <iostream>
using namespace std;

int main() {
    char operation;
    float num1, num2, result;

    // Input operation and numbers from the user
    cout << "Select an operation to perform (+, -, *, /): ";
    cin >> operation;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform the selected operation using if-else statements
    if (operation == '+') {
        result = num1 + num2;
        cout << "Result: " << result << endl;
    } 
    else if (operation == '-') {
        result = num1 - num2;
        cout << "Result: " << result << endl;
    } 
    else if (operation == '*') {
        result = num1 * num2;
        cout << "Result: " << result << endl;
    } 
    else if (operation == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            cout << "Result: " << result << endl;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    } 
    else {
        cout << "Error: Invalid operation!" << endl;
    }

    return 0;
}