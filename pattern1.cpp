#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    int j = 1;
    while(i <= n)
    {
        while(j <= (n*i) )
        {
            cout<< j << " ";
            j++;
        }
        i++;
        cout << endl;
    }
}