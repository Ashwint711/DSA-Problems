#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// Simple method , Time Complexity = O(n^3)0
vector<vector<int>> find3Sum(vector<int> arr, int sum)
{
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size() - 2; i++)
    {
        bool shouldBreak = false;
        for (int j = i + 1; j < arr.size() - 1; j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                {
                    cout << " true " << endl;
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    ans.push_back(temp);
                    shouldBreak = true;
                    break;
                }
            }
            if (shouldBreak)
                break;
        }
        if (shouldBreak)
            break;
    }

    return ans;
}

// Two Pointer approach
vector<vector<int>> find3Numbers(vector<int> arr, int sum)
{
    vector<vector<int>> ans;

    // 1.Sort the array
    sort(arr.begin(), arr.end());
    // 2.Set first element of triplet by traversing through array
    for (int i = 0; i < arr.size() - 2; i++)
    {
        // Counter from Starting
        int j = i + 1; // 1,2,...
        // Counter from Ending
        int k = arr.size() - 1; // n-1

        while (j < k)
        {
            if (arr[i] + arr[j] + arr[k] == sum)
            {
                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                temp.push_back(arr[k]);
                ans.push_back(temp);
                i = j = k = arr.size();
            }
            else if (arr[i] + arr[j] + arr[k] > sum)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }
    return ans;
}

int main()
{
    int len;
    cout << "Enter length of array : ";
    cin >> len;
    vector<int> nums;
    cout << "Enter " << len << " elements : ";
    int temp;
    for (int i = 0; i < len; i++)
    {

        cin >> temp;
        nums.push_back(temp);
    }
    int sum = 0;
    cout << "Enter sum : ";
    cin >> sum;
    // Calling find3Sum() function
    vector<vector<int>> ans = find3Numbers(nums, sum);
    if (ans.size() >= 1)
    {
        for (vector<int> vec : ans)
        {
            for (int v : vec)
            {
                cout << v << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << -1;
    }
    return 0;
}