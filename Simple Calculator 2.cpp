#include <iostream>
using namespace std;

int main() {
    float A, B, result;
    int choice;

    while (true) {
        cout << "chose the operation: 1-add, 2-subtraction, 3-multiply, 4-division, 5-exit" << endl;
        cin >> choice;

        if (choice == 5) {
            cout << "program exited succssfully";
            break; 
        }

        cout << "Enter the first number: ";
        cin >> A;
        cout << "Enter the second number: ";
        cin >> B;

        if (choice == 1) {
            result = A + B;
            cout << A<<"+"<<B<<"=" << result << endl;
        }
        else if (choice == 2) {
            result = A - B;
            cout << A<<"-"<<B<<"=" << result << endl;
        }
        else if (choice == 3) {
            result = A * B;
            cout << A<<"*"<<B<<"=" << result << endl;
        }
        else if (choice == 4) {
            if (B != 0) {
                result = A / B;
                cout << A<<"/" <<B<<"=" << result << endl;
            }
            else {
                cout << "Error Sorry We Cannot divide by zero" << endl;
            }
        }
        else {
            cout << "It's Invalid operation, Pleas Use +, -, *, or / only.";
        }
    }

    return 0;
}