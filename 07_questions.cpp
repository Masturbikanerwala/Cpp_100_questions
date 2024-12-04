#include <iostream>
using namespace std;

int main()
{
    int month;

    cout << "enter your month: ";
    cin >> month;
    if (month % 400 == 0)
        cout << month << " is a Leap month";

    else if (month % 4 == 0 && month % 100 != 0)
        cout << month << " is a Leap month";

    else
        cout << month << " is not a Leap month";

    return 0;
}