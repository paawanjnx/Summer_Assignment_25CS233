// sum of even numbers upto n.
#include<iostream>
using namespace std;
int main () {
    int n,i,sum;
    sum=0;
    cout<<"enter the number:";
    cin>>n;
    for (i=2;i<=n;i++) {
    if (i%2==0)
    { sum=sum+i;} }
cout<<"sum of even numbers is:"<<sum<<endl;
return 0; 
}