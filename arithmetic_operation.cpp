#include <iostream>

using namespace std;

int main() {

    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter your choice : "<<endl;
    cout<<"1. Addition (+)"<<endl;
    cout<<"2. Subtraction (-)"<<endl;
    cout<<"3. Multiplication (*)"<<endl;
    cout<<"4. Division (/)"<<endl;
    cin >> operation;

    if (operation == '1') {
        cout << "Addition Of " << num1 << " + " << num2 <<"  is:  "<< num1 + num2 << endl;
    } else if (operation == '2') {
        cout << "subtraction" << num1 << " - " << num2 <<"  is:  "<< num1 - num2 << endl;
    } else if (operation == '3') {
        cout << "Multiplication" << num1 << " * " << num2 <<"  is:  "<< num1 * num2 << endl;
    } else if (operation == '4') {
        if (num2 != 0) {
            cout << "Division Of " << num1 << " / " << num2 <<"  is:  "<< num1 / num2 << endl;
        } else {
            cout << " Division by zero is not allowed." << endl;
        }
    } else {
        cout << " Invalid operation selected." << endl;
    }
    return 0;
}
