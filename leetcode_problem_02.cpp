//Find number of 1 bit from given binary number
#include <iostream>
using namespace std;
int main()
{
    uint32_t n;
    cout << "Enter value of n : ";
    cin >> n;
    int count = 0;
    while(n != 0)
    {
        if(n&1)//It will return True(1) if last bit is {1}.
        {
            count++;
        }
        n = n >> 1;//Right shifting one bit
    }
    cout << count;
}