// Write a function tha returns power of a number.
#include <iostream>
using namespace std;
// Function declaration
int power(int, int);
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int p;
    cout << "Enter power : ";
    cin >> p;
    int res = power(num, p);
    cout << num << " to the power " << p << " is : " << res;
}
int power(int num, int p)
{
    int ans = 1;
    for (int i = 0; i < p; i++)
    {
        ans = ans * num; // 1*2=2,2*2=4,4*2=8
    }
    return ans;
}