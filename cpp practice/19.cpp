// find the largest amongst three numbers.
#include<iostream>
using namespace std;
int main () {
    int a,b,c;
    cout<<"enter the three numbers:";
    cin>>a>>b>>c;

    if(a>b && a>c)
    {cout<<"a is greatest";}
    else if (b>a && b>c)
    { cout<<" b is greatest";}
    else if ( a==b && b==c && c==a)
    {cout<<"all numbers are same";}
    else
    { cout<<" c is greatest";
    }
    return 0 ;
}