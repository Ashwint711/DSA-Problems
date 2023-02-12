#include <iostream>
using namespace std;


int fact(int n)
{
    if(n == 0)
        return 1;
    int s = n * fact(n - 1);
    return s;
}

int main()
{
    int factorial = fact(5);
    cout << "Factorial of 5 is : " << factorial;
}


