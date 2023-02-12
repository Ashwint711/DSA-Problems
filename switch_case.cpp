#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    char ch1 = 'A', ch2 = 'B', ch3 = 'C';
    switch (a)
    {
    case 1:
        switch (ch1)
        {
        case 'A':
            cout << "Character is : A" << endl;
            break;
        default:
            cout << "I am default case of char A";
        }
        break;
    case 2:
        switch (ch2)
        {
        case 'B':
            cout << "Character is : B" << endl;
            break;
        }
        break;
    case 3:
        switch (ch3)
        {
        case 'C':
            cout << "Character is : C" << endl;
            break;
        }
        break;
    default:
        cout << "Default case of Parent Switch statement";
    }
}