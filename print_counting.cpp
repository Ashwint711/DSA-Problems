#include <iostream>
using namespace std;
void printCounting(int);
int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    printCounting(n);
}

void printCounting(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    // Return statement is allowed in function with void return type.
    return;
}