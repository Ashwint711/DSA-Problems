#include <iostream>
#include <math.h>
using namespace std;

// Bruteforce approach
bool isPowerOfTwo(int num)
{
    for (int i = 0; i < 31; i++)
    {
        if (num == pow(2, i))
        {
            return true;
        }
        if (pow(2, i) > num)
            break;
    }
    return false;
}

// More optimised solution
bool isPowOfTwo(int n)
{
    while (n != 0)
    {
        if (n & 1 == 1 && n != 1)
        {
            return false;
        }
        n = n >> 1;
    }
    return true;
}

// By using set bit
bool isPowOf2(int n)
{
    int setBit = 0;
    while (n != 0)
    {
        if (n & 1 == 1)
        {
            setBit++;
        }
        n = n >> 1;
    }
    if (setBit == 1)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    bool ans = isPowOf2(n);
    if (ans)
        cout << " YES" << endl;
    else
        cout << " NO" << endl;
    return 0;
}