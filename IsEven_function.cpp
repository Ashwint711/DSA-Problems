#include <iostream>
using namespace std;
bool isEven(int);

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    bool res = isEven(num);
    res ? cout << num << " is an Even number" : cout << num << " is an Odd number";
    return 0;
}

bool isEven(int num)
{
    if (num & 1)
        return false;
    return true;
}