// check wether a number is positive,negative or zero.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number";
    cin>> n;

    if(n>0)
    {
        cout<<"number is positive";
    }
    else if(n==0)
    {
        cout<<"number is zero";
    }
    else
    {
    cout<<"number is negative";}
    return 0;
}