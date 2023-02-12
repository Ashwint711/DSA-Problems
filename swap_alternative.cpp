#include <iostream>
using namespace std;

void swapAlternative(int arr[], int length)
{
    for (int i = 0; i < length; i += 2)
    {
        if (i + 1 < length)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int length;
    cout << "Enter array length : ";
    cin >> length;
    int arr[length];
    cout << "Enter " << length << " array elements : ";
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    swapAlternative(arr, length);
    printArray(arr, length);
    return 0;
}