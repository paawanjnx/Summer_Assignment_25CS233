// reverse a number.
#include<iostream>
using namespace std;
int main () {
    int n,ld,rev=0; // ld= last digit
    cout<<"enter a number :";
    cin>>n;

    while(n>0)
{
    ld=n%10;
    n = n/10;
    rev= (rev*10)+ld;
}
cout<<"reversed number is :"<< rev <<endl;
return 0;
}