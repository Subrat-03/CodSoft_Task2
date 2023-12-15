#include <iostream>
using namespace std;
int main() {
    float num1, num2, result;
    char operation;

    cout << "Enter Your first number: ";
    cin >> num1;
    cout << "Enter Your second number: ";
    cin >> num2;

    cout << "Choose an arithmetic operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            }
             else {
                cout << "Error, Not Allowed.Pls Put take num2 as a non-zero Number," << endl;
                return 1;
            }
            break;
        default:
            cout << "Error: Invalid Choice.Choose from Given Operation Only" << endl;
            return 1; 
    }

    cout << "Result: " << result << endl;
    return 0; 
}
