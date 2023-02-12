#include <iostream>
#include <vector>
using namespace std;

// Worst solution - Time Complexity = O(n^2)
int findDuplicate(vector<int> arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
                return arr[i];
        }
    }
    return -1;
}

int findDuplicates(vector<int> arr)
{
    int ans;
    for (int v : arr)
    {
        ans = ans ^ v; // 0^1^2^3^4^5^4 = 1^2^3^5
    }
    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i; // 1^2^3^5 ^ 1^2^3^4^5
    }
    return ans;
}

int main()
{
    vector<int> nums;
    int length;
    cout << "Enter length : ";
    cin >> length;
    cout << "Enter " << length << " elements : ";
    for (int i = 0; i < length; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }

    int ans = findDuplicates(nums);
    cout << ans;
    return 0;
}