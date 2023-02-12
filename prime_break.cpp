//Program to determine whether a number is Prime or not
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n : ";
    cin >> n;
    int d;
    for (d = 2; d < n; d++)
    {
        if(n % d == 0)
            break;        
    }
    if(d == n)
        cout << "Prime";
    else
        cout << "Composite";
}