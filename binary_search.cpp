#include <iostream>
#include <vector>
using namespace std;

int findNum(int arr[], int size, int key)
{
    int mid = size / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] < key)
    {
        int j = mid + 1;
        for (j; j < size; j++)
        {
            if (arr[j] == key)
            {
                return j;
            }
        }
    }
    else
    {
        int j = 0;
        for (j; j < mid; j++)
        {
            if (arr[j] == key)
            {
                return j;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[] = {3, 5, 9, 13, 27};
    int size = sizeof(arr) / sizeof(int);
    int key = 13;
    int ans = findNum(arr, size, key);
    cout << ans;
    return 0;
}