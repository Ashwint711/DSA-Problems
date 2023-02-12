//Program to determine whether given number is divisible by 3 or not
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int r = 0;
    while(n > 0)
    {
        r = n % 10;
        sum += r;
        n = n / 10;
    }
    if(sum % 3 == 0)
        cout << "DIVISIBLE BY 3";
    else
        cout << "NOT DIVISIBLE BY 3";

}