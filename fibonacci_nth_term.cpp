#include <iostream>
using namespace std;
int fibNthTerm(int);

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int res = fibNthTerm(n);
    cout << n << " term is : " << res;
    return 0;
}

int fibNthTerm(int n)
{
    int a = 0, b = 1, c;
    for (int i = 0; i < n - 1; i++)
    {
        c = a + b; // 0+1=1,2,3,5,8
        a = b;     // 1,1,2,3
        b = c;     // 1,2,3,5
    }
    return a;
}