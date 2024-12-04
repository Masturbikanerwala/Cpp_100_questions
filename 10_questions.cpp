#include<iostream>
using namespace std;

int main ()
{
    int num, sum = 0;
 // num = 123 sum = 4
    num=1234;
    cout <<"\nThe number is: " << num; 
 
    //loop to find sum of digits
    while(num!=0){
        sum += num % 10;
        num = num / 10;
    }
 
    //output
    cout <<"Sum of digits: " << sum;
 
    return 0;
}