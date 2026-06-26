// check wether a number is multiple of both 3 and 7
#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"enter the number";
    cin>>n;

    if (n%3==0 && n%7==0)
    {cout<< " number is multiple of both 3 and 7";}
    else if (n%3==0)
    { cout<<"number is multiple of 3 but not 7";
    }
    else if (n%7==0)
    { cout<<"number is divisible by 7 but not 3";}

    else
    {cout<<"number is not a multiple of 3 and 7";}
    return 0;

}