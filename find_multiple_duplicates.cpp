#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<int> findAllDuplicates(vector<int> arr)
{
    map<int, int> mp;
    for (int key : arr)
    {
        mp[key] += 1;
    }
    vector<int> ans;
    for (auto it : mp)
    {
        if (it.second > 1)
        {
            ans.push_back(it.first);
        }
    }
    return ans;
}

int main()
{
    cout << "Enter number of elements : ";
    int len;
    cin >> len;
    cout << "Enter " << len << " numbers : ";
    vector<int> nums;
    for (int i = 0; i < len; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    nums = findAllDuplicates(nums);
    for (int v : nums)
    {
        cout << v << " ";
    }
    return 0;
}