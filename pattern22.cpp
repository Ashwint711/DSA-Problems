#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while(row <= n)
    {
        //Printing 1st triangle
        int col = 1;
        while(col <= (n-row+1))
        {
            cout << col;
            col++;
        }
        //Printing Star Pattern (2nd triangle)
        int star = (row * 2) - 2;
        while(star)
        {
            cout << '*';
            star--;
        }
        //Printing 3rd pattern
        int pivot = (n - row + 1);
        while(pivot)
        {
            cout << pivot;
            pivot--;
        }
        cout << endl;
        row++;
    }
}