#include <iostream>
using namespace std;

bool isPresentInArray(int arr[], int length, int element)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == element)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int length = 10;
    int arr[length] = {-1, 2, 3, 3, 4, 5, 33, 22, 44, 55, 1};
    bool ans = isPresentInArray(arr, length, 2209);
    if (ans)
        cout << "YES";
    else
        cout << "NO";
}