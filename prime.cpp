//Program to determine whether given number is prime or not
#include <iostream>
using namespace std;

int main()
{
    int n;
    int number = 2;
    cout << "Enter a number : "<<endl;
    cin >> n;
    
    while(number < n)
    {
        if(n % number == 0)
        {
            cout << "COMPOSITE";
            break;
        }
        else
            number += 1;
    }
    if(number == n)
        cout << "PRIME";
}