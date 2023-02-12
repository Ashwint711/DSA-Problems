#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOnesAndZeros(int arr[], int size)
{
    int i = 0, j = size - 1;
    while (i < j)
    {
        while (arr[i] == 0 && i < j)
            i++;
        while (arr[j] == 1 && i < j)
            j--;
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{
    int size;
    cout << "Enter array length : ";
    cin >> size;
    cout << "Enter " << size << " elements : ";
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sortOnesAndZeros(arr, size);
    printArray(arr, size);
    return 0;
}