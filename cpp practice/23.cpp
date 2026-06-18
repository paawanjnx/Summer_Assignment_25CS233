// scholarship eligiblity : marks>80% , attendance > 75% , family income <800000
#include<iostream>
using namespace std;
int main () {
    int marks, attendance, family_income;
     cout<<"enter your marks%";
     cin>> marks;
     cout<< "enter your attendance%";
     cin>> attendance;
     cout<<"please tell your family income rs:";
     cin>> family_income;

     if (marks>80 && attendance>=75 && family_income<800000 )
{ cout<<" you are eligible for the scholarship";
}
else{ cout<<" sorry you are not eligible for scholarship";}
return 0 ;
}