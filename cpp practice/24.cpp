// loan eligiblity : age >21 , salary < 25000rs , credit score >700
#include<iostream>
using namespace std;
int main () {
    int age,salary,credit_score;
     cout<<"enter your age:";
     cin>> age;
     cout<< "enter your salary in rs:";
     cin>> salary;
     cout<<"please tell your credit score :";
     cin>> credit_score;

     if (age>=21 && salary>=25000 && credit_score>700 )
{ cout<<" you are eligible for loan";
}
else{ cout<<" sorry you are not eligible for loan";}
return 0 ;
}