#include <iostream>
using namespace std;

int addArray(int arr[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int length;
    cout << "Enter length of array : ";
    cin >> length;
    int arr[length];
    cout << "Enter array elements : ";
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    int sum = addArray(arr, length);
    cout << "Sum of array is : " << sum << endl;
    return 0;
}