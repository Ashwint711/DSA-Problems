// #include <iostream>
// #include <math.h>
// using namespace std;

// int decimalToBinary(int n)
// {
//     int ans = 0;
//     int i = 0;
//     while (n != 0)
//     {
//         int bit = n & 1;
//         ans = (bit * pow(10, i)) + ans;
//         n = n >> 1;
//         i++;
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cin >> n;

//     if (n < 0)
//     {
//         // if number is negative
//         n = n * (-1);
//         int ans = decimalToBinary(n);
//         // Find 2's compliment of the number
//         // 1's comp
//         int newAns = (~ans);
//         // 2's comp
//         newAns = newAns + 1;
//         cout << newAns << endl;
//     }
//     else
//     {
//         // if number is positive
//         int ans = decimalToBinary(n);
//         cout << ans << endl;
//     }
// }

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // Convert decimal number to binary
    int n;
    cin >> n;
    int i = 0;
    int ans = 0;
    int bits_array[32];
    for (int i = 0; i < 32; i++)
    {
        cout << bits_array[i] << " ";
    }
    while (n)
    {
        int bit = n & 1;                // 1011&1=1,0101&1=1,0010&1=0,0001&1=1
        ans = (bit * pow(10, i) + ans); // 1*1+0=1,1*10+1=11,0*100+11=11,1*1000+11=1011
        n = n >> 1;                     // 1011>>1=0101,0101>>1=0010,0010>>1=0001
        i++;
    }
    cout << "Binary is : " << ans << endl;
    cout << "Negative Binary is : " << ~ans << endl;
}