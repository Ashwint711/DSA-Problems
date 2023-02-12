#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char op;
    cout << "Enter 1st number : ";
    cin >> num1;
    cout << "Enter 2nd number : ";
    cin >> num2;
    cout << "Enter Operator : ";
    cin >> op;

    switch (op)
    {
    case '*':
        cout << "Multiplication is : " << num1 * num2;
        break;
    case '/':
        cout << "Division is : " << num1 / num2;
        break;
    case '+':
        cout << "Addition is : " << num1 + num2;
        break;
    case '-':
        cout << "Subtraction is : " << num1 - num2;
        break;
    default:
        "Enter correct Operator!";
    }
}