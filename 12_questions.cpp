#include <iostream>
using namespace std;

// main program
int main()
{
    // variables initialization
    int num, reverse = 0, temp;
    // num=12321;
    cout << "Enter your number : ";
    cin >> num;

    temp = num;
    // loop to find reverse number
    while (num > 0)
    {

        reverse = (reverse * 10) + (num % 10);
        num /= 10;
    };

    // palindrome if num and reverse are equal
    if (temp == reverse)
        cout << " is Palindrome";
    else
        cout << " is not a Palindrome";
}