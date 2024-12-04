#include <iostream>
using namespace std;
int main()
{
    int n, x, y, z, count;
    cout << "Enter your terms: ";
    cin >> n;

    x = 0;
    y = 1;
    z = 0;
    count = 1;
    while (count <= n)
    {
        cout << " " << z;
        x = y;
        y = z;
        z = x + y;
        count = count + 1 ;
    }
    return 0 ;
}