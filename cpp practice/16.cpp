// calculate income tax based on slabs
#include<iostream>
using namespace std;
int main () {
    int income,tax;
    cout<<"enter your income";
    cin>>income;

    if (income <= 250000)
    { tax=0;
    }
    else if ( income <= 500000)
    { tax = 0.05*income;
    }
else if (income <=1000000)
{ tax = 0.2*1000000; }

else if ( income > 1000000)
{ tax = 0.3*income;}

cout<<"Income Tax = "<< tax << endl;
return 0; 


}