// sum of first n natural numbers.
#include<iostream>
using namespace std;
int main () {
    int n,i,sum;
    sum=0;
    cout<<"enter the number:";
    cin>>n;

    for(i=1;i<=n;i++)
    {sum=sum+i;}
    cout<<"SUM of number is :"<<sum<<endl;
return 0;
}