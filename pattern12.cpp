#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while(row <= n)
    {
        int col = 1;
        // int ch = 'A' + n - row;
        while(col <= row)
        {
            cout <<(char)('A' + (n-row-1) + col)<<" ";
            // ch = ch + 1;
            col++;
        }
        row++;
        cout << endl;
    }
}