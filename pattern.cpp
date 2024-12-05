// no 1  pattern

// #include <iostream>
// using namespace std;

//     int main(){
//         int n = 4;
//         for ( int i = 1; i <= n; i++)
//         {
//             for (int j = 1; j <= n; j++)
//             {
//                 cout<< j ;
//                 cout<<" ";
//             }
//             cout<<endl;
//         }

//     }

// no 2 pattern

// #include <iostream>
// using namespace std;

//     int main(){
//         int n = 4;
//         for ( int i = 1; i <= n; i++)
//         {
//             for (int j = 1; j <= n; j++)
//             {
//                 cout<< "*" ;
//                 cout<<" ";
//             }
//             cout<<endl;
//         }

//     }

// no 3 pattern

// #include <iostream>
// using namespace std;

//     int main(){
//         int n = 4;
//         for ( int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 cout<< "*" ;
//                 cout<<" ";
//             }
//             cout<<endl;
//         }

//     }

// no 4 pattern

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         char ch = 'A';
//         for (int j = 0; j < n; j++)
//         {
//             cout<<ch<<" ";
//             ch = ch + 1;
//         }
//         cout << endl;
//     }
// }

// no 5 pattern

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 3, num = 1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout<<num<<" ";
//             num++;
//         }
//         cout << endl;
//     }
// }

// no 6 pattern

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 3;
//     char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < n; j++)
//         {   
//             cout << ch << " ";

//             ch++;
//         }
//         cout << endl;
//     }
// }


 //no 7 pattern

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;
   
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j <= i; j++)
//         {   
//             cout<<" * ";
//         }
//         cout << endl;
//     }
// }

//no 8 pattern

#include <iostream>
using namespace std;

int main()
{
    int n = 4;
   
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i+1 ; j++)
        {   
            cout<<i + 1;
        }
        cout << endl;
    }
}