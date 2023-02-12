#include <iostream>
using namespace std;

void sort012(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter array length : ";
    cin >> size;

    int nums[size];
    cout << "Enter " << size << " array elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    sort012(nums, size);
    printArray(nums, size);
    return 0;
}