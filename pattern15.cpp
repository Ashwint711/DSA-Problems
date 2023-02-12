#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; // 4
    int row = n;
    while (row >= 1)
    {
        int col = 1;
        while (col <= n)
        {
            if (col < (n - row + 1))
                cout << " ";
            else
                cout << "*";
            col++;
        }
        row--;
        cout << endl;
    }
}