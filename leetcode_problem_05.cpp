#include <iostream>
#include <math.h>
using namespace std;
// Solution from the Internet - Efficient code
bool isPowerOfTwo(int n)
{
    // Exponents of 2 starts from 1 so,
    if (n <= 0)
        return false;
    while (n > 0)
    {
        if (n & 1 == 1 && n != 1)
            return false;
        n >>= 1;
    }
    return true;
}
/* Mine solution - BRUTE FORCE APPROACH */
// bool isPowerOfTwo(int n)
// {
//     for (int i = 0; i <= 30; i++)
//     {
//         if (n == pow(2, i))
//             return true;
//     }
//     return false;
// }
int main()
{
    int n;
    cin >> n;
    bool ans = isPowerOfTwo(n);
    cout << ans;
}