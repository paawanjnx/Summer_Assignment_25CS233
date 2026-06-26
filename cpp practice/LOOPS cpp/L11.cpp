// count digits in a number. (some doubts)

#include<iostream>
using namespace std;
int main () {
    int n,count=0; // 0 inititalised
    cout<<"enter the number:";
       cin>>n;


 for(count=0;n>0;count++) //n > 0 because hame kitni baar loop chalana hai.
 { n=n/10;}  // this is always used to remove the last digit.
 cout<<"the digits in a number are = "<<count<<endl;

 return 0; }

     
    