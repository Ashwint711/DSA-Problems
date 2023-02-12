#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while(row <= n)
    {
        int col = 1;
        while(col <= n-row+1)
        {
            cout << col << " ";
            col++;
        }
        int star = 1;
        while(star <= (row*2-2) )
        {
            cout << "* ";
            star++;
        }
        while(--col)
        {
            cout << col << " ";
        }
        row++;
        cout << endl;
    }
}