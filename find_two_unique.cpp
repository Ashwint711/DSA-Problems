#include <iostream>
using namespace std;

void findTwoUniqueNumbers(int arr[], int len)
{
    int ans = 0;
    for (int i = 0; i < len; i++)
    {
        ans = ans ^ arr[i]; // 3^2
    }
    int odd = 0, even = 0;
    for (int i = 0; i < len; i++)
    {
        // odd
        if (arr[i] & 1)
        {
            odd = odd ^ arr[i];
        } // even
        else
        {
            even = even ^ arr[i];
        }
    }
    even = even ^ ans;
    odd = odd ^ ans;
    cout << odd << " " << even;
}

int main()
{
    int arr[] = {5, 5, 4, 4, 1, 1, 3, 2};
    int length = 8;
    findTwoUniqueNumbers(arr, length);
    return 0;
}