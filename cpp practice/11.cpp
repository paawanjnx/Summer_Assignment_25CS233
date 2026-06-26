// find the largest among four numbers using nested if.
#include<iostream>
using namespace std;
int main () {
    int a,b,c,d;
    cout<<"enter the numbers";
    cin>> a>>b>>c>>d;
    if ( a>b && a>c && a>d)
    { 
        cout<<"a is greatest";
    }
    else if ( b>a && b>c && b>d)
    {
        cout<<" b is greatest";

    }
 else if ( c>a &&  c>b && c>d)
 {
    cout<<"c is greatest ";

 }
 else if (a==b && a==c && a==d && b==c && b==d && c==d)
 {
    cout<<"all numbers are equal";
 }
else
{
    cout<<"d is greatest";
}
    return 0;
}