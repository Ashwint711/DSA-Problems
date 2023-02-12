#include<iostream>
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
        while(col <= row)
        {
            cout <<(char)ch<< " ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }
}