#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}
int main()
{
    // Initializing while declaration
    int arr[10] = {1, 2};
    // Rest of the indexes will be assigned with {0}.
    printArray(arr, 10);

    // Initializing after declaration
    int numbers[10];
    numbers[0] = 1;
    numbers[1] = 2;
    // Rest of the indexes will be assigned with Garbage Values
    printArray(numbers, 10);
    return 0;
}