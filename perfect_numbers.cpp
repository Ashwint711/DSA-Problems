//If sum of proper factors of a number is equal to that number then it is a perfect no
#include <iostream>
using namespace std;
int main()
{
    int n = 1;
    while(n <= 100)//1
    {
        int sum = 0;
        int d = 1;
        int j = 1;
        while(j < n)//2
        {
            if(j % d == 0)//
                sum += d;
            j++;
            d++;
        }
        n++;
        if(sum == j)
            cout << sum<<" ";
    }
}