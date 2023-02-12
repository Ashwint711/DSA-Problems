#include <iostream>
using namespace std;

void reverseArray(int arr[], int length)
{
    int i = 0, j = length - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    return;
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
    reverseArray(arr, length);
    return 0;
}