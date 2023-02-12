#include <iostream>
#include <vector>

using namespace std;
vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;

    for (int i = 0; i < arr.size() - 1; i++)
    {
        vector<int> temp;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if ((arr[i] + arr[j]) == s)
            {
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
            }
        }
        ans.push_back(temp);
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
    int s;
    cout << "Enter sum : ";
    cin >> s;
    vector<vector<int>> ans = pairSum(nums, s);
    for (vector<int> v : ans)
    {
        for (int x : v)
        {
            cout << x << " ";
        }
        cout << "New line" << endl;
    }
    return 0;
}