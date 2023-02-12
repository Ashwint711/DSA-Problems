#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while(row <= n)
    {
        //Printing spaces
        int space = n - row;
        while(space--)
        {
            cout << " ";
        }
        //Printing 1st triangle
        int col = 1;
        while(col <= row)
        {
            cout << col;
            col++;
        }
        //Printing 2nd triangle
        int pivot = row - 1;
        while(pivot)
        {
            cout << pivot;
            pivot--;
        }
        cout << endl;
        row++;
    }
}