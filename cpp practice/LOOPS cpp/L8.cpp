// sum of odd numbers upto n.
#include<iostream>
using namespace std;
int main () {
    int n,i,sum;
    sum=0;
    cout<<"enter the number:";
    cin>>n;
    for (i=1;i<=n;i++) {
    if (i%2!=0)
    { sum=sum+i;} }
cout<<"sum of odd numbers is:"<<sum<<endl;
return 0; 
}