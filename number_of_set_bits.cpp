#include <iostream>
using namespace std;
int countSetBits(int, int);

int main()
{
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;

    int ans = countSetBits(a, b);
    cout << "Total number of set bits in " << a << " and " << b << " is : " << ans;
}

int countSetBits(int a, int b)
{
    int count = 0;
    while (a)
    { // 10,5,2,1,0
        if (a & 1)
        {            // 1010&1=0,0101&1=1,0010&1=0,0001&1=1
            count++; // 1+1 = 2
        }
        a = a >> 1; // 1010>>1=0101,0010,0001,0000
    }
    while (b)
    {
        if (b & 1)
        {
            count++;
        }
        b = b >> 1;
    }
    return count;
}