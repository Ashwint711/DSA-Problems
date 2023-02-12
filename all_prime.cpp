#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 2;
    int count = 0;
    while(x <= n)
    {
        int divisor = 2;
        while(divisor < x)
        {
            if(x % divisor == 0)
                break;
            divisor++;
        }
        if(divisor == x){
            cout << x << " ";
            count++;
        }
        x++;
    }
    cout << endl<<"Total PRIME numbers are : " << count;
}