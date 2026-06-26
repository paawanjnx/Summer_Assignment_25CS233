// print multiplication table of a number
#include<iostream>
using namespace std;
int main () {
    int n,i;
    cout<<"enter a number for the table:";
    cin>> n;

    for(i=1;i<=10;i++)
    { cout<<n<< "x"<< i << "="<<n*i<<endl;}
    return 0;
}