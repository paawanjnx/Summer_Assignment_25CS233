// calculate electricity bill based on units consumed.
#include<iostream>
using namespace std;
int main () {
float units, bill ;
cout<<"enter electricity units consumed:";
cin>> units;

if(units<=100)
{ bill = units*1.5;
    cout<<"Electricity bill = rs."<<bill<<endl;
}
else if(units>101 && units<200)
{bill = units*2.5;
    cout<<"Electricity bill = rs."<<bill<<endl;
}
else if
(units>200) 
{ bill= units*4;
    cout<<"Electricity bill = rs."<<bill<<endl;
}

    return 0;
}