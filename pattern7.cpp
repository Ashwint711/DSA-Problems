#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    int ch = 'A';
    while(row <= n)
    {
        int col = 1;
        while(col <= n)
        {
            cout << (char)ch << " ";
            ch++;
            col++;
        }
        row++;
        cout << endl;
    }
}