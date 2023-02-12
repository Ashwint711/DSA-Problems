#include <iostream>
using namespace std;

void findMaxMin(int numbers[], int array_length)
{
    int maximum = numbers[0];
    int minimum = numbers[0];
    for (int i = 1; i < array_length; i++)
    {
        // maximum = numbers[i] > maximum ? numbers[i] : maximum;
        maximum = max(maximum, numbers[i]);

        // minimum = numbers[i] < minimum ? numbers[i] : minimum;
        minimum = min(minimum, numbers[i]);
    }
    cout << "Maximum value is : " << maximum << endl;
    cout << "Minimum value is : " << minimum << endl;
}

int main()
{
    int numberOfElements;
    cout << "Enter number of elements : ";
    cin >> numberOfElements;

    int numbersArray[100];
    int maximum = 0;

    for (int i = 0; i < numberOfElements; i++)
    {
        cin >> numbersArray[i];
    }

    findMaxMin(numbersArray, numberOfElements);
    return 0;
}