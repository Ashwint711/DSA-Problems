#include <iostream>
#include <vector>
#include <map>
using namespace std;

// vector<int> findArrayIntersection(vector<int> &arr1, vector<int> &arr2)
// {
//     map<int, int> mp1;
//     map<int, int> mp2;
//     for (int k : arr1)
//         mp1[k] += 1;
//     for (int k : arr2)
//         mp2[k] += 1;

//     vector<int> ans;

//     for (auto it1 : mp1)
//     {
//         for (auto it2 : mp2)
//         {
//             if (it1.first == it2.first)
//             {
//                 int counter = min(it1.second, it2.second);
//                 for (int i = 0; i < counter; i++)
//                 {
//                     ans.push_back(it2.first);
//                 }
//             }
//         }
//     }
//     return ans;
// }

// Brute-Force method
vector<int> findArrayIntersection(vector<int> arr1, vector<int> arr2)
{
    vector<int> ans;
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr2.size(); j++)
        {
            if (arr1[i] == arr2[j])
            {
                ans.push_back(arr2[j]);
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
    return ans;
}

int main()
{
    cout << "Enter number of elements for 1st array: ";
    int len;
    cin >> len;
    cout << "Enter " << len << " numbers : ";
    vector<int> arr1;
    for (int i = 0; i < len; i++)
    {
        int temp;
        cin >> temp;
        arr1.push_back(temp);
    }

    cout << "Enter number of elements for 2nd array: ";

    cin >> len;
    cout << "Enter " << len << " numbers : ";
    vector<int> arr2;
    for (int i = 0; i < len; i++)
    {
        int temp;
        cin >> temp;
        arr2.push_back(temp);
    }
    vector<int> ans;
    ans = findArrayIntersection(arr1, arr2);
    if (ans.size() > 0)
    {
        for (int v : ans)
        {
            cout << v << " ";
        }
    }
    else
    {
        cout << -1;
    }
    return 0;
}