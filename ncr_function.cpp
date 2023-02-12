#include <iostream>
using namespace std;
int factorial(int num)
{
    if (num == 0)
        return 1;
    int s = num * factorial(num - 1);
    return s;
}

double find_ncr(int n, int r)
{
    if (r == 0)
        return 1;
    double ans = factorial(n) / (factorial(r) * factorial(n - r));
    return ans;
}

int main()
{
    int n;
    cout << "Enter value of n : ";
    cin >> n;
    int r;
    cout << "Enter value of r : ";
    cin >> r;
    double ans = find_ncr(n, r);
    cout << "Answer is : " << ans;
    return 0;
}