#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int v : arr)
    {
        cout << v << " ";
    }
}

int main()
{
    int len;
    cout << "Enter array length : ";
    cin >> len;
    vector<int> nums;
    cout << "Enter " << len << " array elements : ";
    int temp = 0;
    for (int i = 0; i < len; i++)
    {
        cin >> temp;
        nums.push_back(temp);
    }
    bubbleSort(nums);

    return 0;
}