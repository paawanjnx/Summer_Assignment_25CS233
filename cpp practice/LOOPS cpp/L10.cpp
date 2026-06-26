// calculate factorial of a number
// factorial of first n number.
#include<iostream>
using namespace std;
int main () {
    int n,i,factorial=1;
    cout<<"enter the number:";
       cin>>n;

       for(i=1;i<=n;i++)
       factorial = factorial*i;
        cout<<"factorial of first n numbers is:"<<factorial<<endl;
    return 0;
    }
    