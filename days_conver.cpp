#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter a number from 1 to 7\n";
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "wednesday";
        break;
    case 4:
        cout << "thrusday";
        break;
    case 5:
        cout << "friday";
        break;
    case 6:
        cout << "saturday";
        break;
    case 7:
        cout << "sunday";
        break;
    default:
        cout << "INVALID INPUT";
        break;
    }
    return 0;
}
