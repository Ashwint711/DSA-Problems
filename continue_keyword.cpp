#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of n : ";
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 != 0)
            continue;
        cout << i << " ";
    }
}