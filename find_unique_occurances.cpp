#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;
bool uniqueOccurances(vector<int> arr)
{
    map<int, int> mp;
    for (int k : arr)
        mp[k] += 1;

    set<int> st;
    for (auto it : mp)
    {
        if (st.count(it.second) > 0)
        {
            return false;
        }
        else
        {
            st.insert(it.second);
        }
    }
    return true;
}

int main()
{
    vector<int> arr;
    //-1,4,-5,11,-3,4,-1,5,0,11,3
    // 26 2 16 16 5 5 26 2 5 20 20 5 2 20 2 2 20 2 16 20 16 17 16 2 16 20 26 16
    int length = 5;
    for (int i = 0; i < length; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    bool ans = uniqueOccurances(arr);
    cout << ans;
    return 0;
}
