// Program to find Unique number in an array/list
#include <iostream>
#include <map>
using namespace std;

// If a number occurs occurs only two times
int findUnique(int arr[], int length)
{
    int ans = 0;
    for (int i = 0; i < length; i++)
    {
        ans = ans ^ arr[i]; // 0^1^1^2^2^3
    }
    return ans;
}

// If one number occures more than two times
int findUniqueNumber(int arr[], int length)
{
    map<int, int> mp;
    for (int i = 0; i < length; i++)
    {
        mp[arr[i]] += 1;
    }

    for (auto it : mp)
    {
        if (it.second == 1)
            return it.first;
    }
    return 0;
}

int main()
{
    int length;
    cout << "Enter length : ";
    cin >> length;
    int arr[length];
    cout << "Enter " << length << " array elements : ";
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    int ans = findUniqueNumber(arr, length);
    cout << "Unique number is : " << ans;
    return 0;
}

// int findUnique(int arr[], int length)
// {
//     int ans = 0;
//     for (int i = 0; i < length; i++)
//     {
//         ans = ans ^ arr[i];
//     }
//     return ans;
// }