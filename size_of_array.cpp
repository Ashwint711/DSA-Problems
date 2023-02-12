#include <iostream>
using namespace std;

int main()
{
    int myArray[10];
    int arraySize = sizeof(myArray) / sizeof(int);
    cout << "Size of array is : " << arraySize;
    cout << endl;
    double decimalValues[10];
    arraySize = sizeof(decimalValues) / sizeof(double);
    cout << "Size of decimal array is : " << arraySize;
}