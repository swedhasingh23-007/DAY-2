#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;
    double result;
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter an operation (+, -, *, /, %): ";
    cin >> operation;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result << endl;
            break;
        
        case '-':
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result << endl;
            break;
        
        case '*':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result << endl;
            break;
        
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        
        case '%':
            if ((int)num2 != 0) {
                result = (int)num1 % (int)num2;
                cout << (int)num1 << " % " << (int)num2 << " = " << (int)result << endl;
            } else {
                cout << "Error: Modulus by zero!" << endl;
            }
            break;
        
        default:
            cout << "Invalid operation!" << endl;
    }
    
    return 0;
}
