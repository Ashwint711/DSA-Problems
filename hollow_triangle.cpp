#include <iostream>
using namespace std;

int main()
{
    int n;
    // For hollow triangle n must be greater than or equal to - 4
    cin >> n;
    if (n >= 4)
    {
        for (int i = 0; i < n; i++)
        {
            for (int k = (n - i); k > 1; k--)
            {
                cout << " ";
            }
            for (int j = 0; j <= i; j++)
            {
                if(i != 0 && i != 1 && i != (n-1) && j != 0 && j != i )
                    cout << "  ";
                else
                    cout << "* ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Enter value greater than 4 ";
    }
}