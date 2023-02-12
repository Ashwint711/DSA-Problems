#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, c;
    int n;
    cout << "Enter value of n : ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cout << a << " ";//0,1,1
        c = a + b;//0+1=1,1+1=2,1+2=3
        a = b;//1,1,2
        b = c;//1,2,3
    }
}