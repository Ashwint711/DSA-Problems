// Reversing the digits of a number betwenn -2^31 to 2^31-1
#include <iostream>
using namespace std;

int reverse_number(int x)
{
    int ans = 0;
    while (x != 0)
    {
        int digit = x % 10;
        if (ans < INT_MIN / 10 || ans > INT_MAX / 10) // 10000 < 10000.0
            return 0;
        ans = (ans * 10) + digit;
        x = x / 10;
    }
    return ans;
}

int main()
{
    int x;
    cin >> x;
    int ans = reverse_number(x);
    cout << "Reversed number is : " << ans;
}