#include<iostream>
using namespace std;

int main(){
    int  i , sum = 0 , x ;


    cout<<"enter your number to check : "<<endl;
    cin>>i;
    x = i;
    while (i>0)
    {
        sum = sum + (i%10)*(i%10)*(i%10);
        i = i/10;
    }
    if (sum == x)
    {
        cout<<"Your Num is Armstrong";
    }
    else
    {
        cout<<"Your Num is not Armstrong";
    }
    
    
    
}