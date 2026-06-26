// product of first n number.
#include<iostream>
using namespace std;
int main () {
    int n,i,product=1;
    cout<<"enter the number:";
       cin>>n;

       for(i=1;i<=n;i++)
       product = product*i;
        cout<<"product of first n numbers is:"<<product<<endl;
    return 0;
    }
    