#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    int num = 1;
    while(row <= n)
    {
        int space = n - row;
        while(space--)
        {
            cout << " ";
        }
        int col = 1;
        while(col <= row)
        {
            cout << num ;
            col++;
            num++;
        }
        cout << endl;
        row++;
    }
}