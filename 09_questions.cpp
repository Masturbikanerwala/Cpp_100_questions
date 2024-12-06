#include <iostream>
using namespace std;

int adiition(int data)
{

    if (data == 10)
    {
        return 10;
    }
    return data + adiition(data + 1);
}

int main()
{
    int data;
    cout << "enter your number range : ";
    cin >> data;
    int result = adiition(1);
    cout << result << endl;
}