//Given a number n return the difference between product and sum of digits of the number
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int product = 1;
    while(n)//123
    {
        int r = n % 10;//3,2,1
        sum += r;//0+3=3,3+2=5,5+1=6
        product *= r;//1*3=3,3*5=15, 15*1= 15
        n /= 10; // 123/10=12,1,0
    }
    cout << product - sum;
}