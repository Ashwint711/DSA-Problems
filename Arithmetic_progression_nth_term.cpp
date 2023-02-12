#include <iostream>
using namespace std;
int findNthTermOfAP(int);
void printAP();

int main()
{
    int nth;
    cout << "Enter term number: ";
    cin >> nth;
    int res = findNthTermOfAP(nth);
    cout << nth << " term of A.P is : " << res;
    // printAP();
    return 0;
}

int findNthTermOfAP(int n)
{
    // A.P = 7 + n*3
    int res = 7 + (n * 3);
    return res;
}

void printAP()
{
    int a; // First term
    int d; // Difference
    int n; // nth term
    cout << "Enter first term of A.P : ";
    cin >> a;
    cout << "Enter difference of terms of A.P : ";
    cin >> d;
    cout << "Enter term number of A.P : ";
    cin >> n;

    int res = a + (n * d);
    cout << "Result is : " << res;
}