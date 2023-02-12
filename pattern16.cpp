#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while(row <= n)
    {
    //Printint space
    int space = n - row;
    while(space)
    {
        cout << " ";
        space--;
    }
    //printing first triangle
    int col = 1;
    while(col <= row)
    {
        cout << col;
        col++;
    }
    //printing second triangle
    int start = row - 1;
    while(start)
    {
        cout << start;
        start--;
    }

    row++;
    cout << endl;
    }
}