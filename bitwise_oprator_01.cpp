#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int bit = ~a; //~00000010=11111101 ,print:00000010+1=00000011=-3
    cout << bit;
}