#include <iostream>
using namespace std;
bool isPrime(int);

bool isPrime(int n)
{

    for (int d = 2; d < n; d++)
    {
        if (n % d == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter an number : ";
    cin >> n;
    bool res = isPrime(n);
    res ? cout << n << " is a Prime number" : cout << n << " is Composite number";
    return 0;
}