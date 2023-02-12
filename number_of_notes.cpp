#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "Enter amount : ";
    cin >> amount;
    int ans = 0;
    int divisor = 100;

    switch (divisor)
    {
    case 100:
        ans += amount / 100;
        cout << amount / 100 << " notes of 100 ,";
        amount = amount % 100;
    case 50:
        ans += amount / 50;
        cout << amount / 50 << " notes of 50 ,";
        amount = amount % 50;
    case 20:
        ans += amount / 20;
        cout << amount / 20 << " notes of 20 ,";
        amount = amount % 20;

    case 1:
        ans += amount / 1;
        cout << amount / 1 << " notes of 1 ," << endl;
        amount = amount % 1;
    }
    cout << "Total notes : " << ans;
}