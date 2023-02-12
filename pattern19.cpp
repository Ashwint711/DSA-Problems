#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while(row <= n)
    {
        int space = row - 1;
        while(space--)
        {
            cout << " ";
        }
        int col = 0;
        while(col <= n-row)
        {
            cout << row + col;
            col++;
        }
        cout << endl;
        row++;
    }
}