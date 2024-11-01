#include <iostream>
using namespace std;

int main() {

    char operation;
    cout << "Enter your operation : ( + , - , / , x ) ";
    cin >> operation;

    double numberOne;
    cout << "Enter number one : ";
    cin >> numberOne;

    double numberTwo;
    cout << "Enter number two : ";
    cin >> numberTwo;

    switch (operation) {
        case '+':
            cout << "The addition result is : " <<numberOne + numberTwo;
        break;
        case '-':
            cout << "The subtraction result is : " <<numberOne - numberTwo;
        break;
        case 'x':
            cout << "The multiplication result is : " <<numberOne * numberTwo;
        break;
        case '/':
            cout << "The division result is : " <<numberOne / numberTwo;
        break;
        default:
            cout << "Invalid operation";
    }

    return 0;
}