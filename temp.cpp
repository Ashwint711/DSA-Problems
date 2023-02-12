#include <iostream>
#include <vector>
using namespace std;

void findTriplet(vector<int> arr, int sum)
{
    // Time Complexity of this Algorithm is : O(n)
    //{2,5,5,5,10,10}//20

    int i = 0, j = 1, k = arr.size() - 1;
    while (i < arr.size() - 2 && j < arr.size() - 1 && k < arr.size())
    {
        if (arr[i] + arr[j] + arr[k] == sum)
        {
            cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
            i++;
            j++;
            k--;
        }
        else if (arr[i] + arr[j] + arr[k] > sum && k > j)
        {
            k--;
        }
        else
        {
            j++;
        }
        j == arr.size() - 2 ? i++ : i += 0;
    }
}

int main()
{
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(5);
    arr.push_back(5);
    arr.push_back(10);
    int k = 20;

    findTriplet(arr, k);
    return 0;
}