#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0, i = 0;
    while (n != 0)
    {
        int digit = n % 10; // 1011%10=1
        if (digit == 1)
            ans = (digit * pow(2, i) + ans);
        n = n / 10;
        i++;
    }
    cout << "Decimal representation is : " << ans;
}