// restaurant discount calculator.
#include<iostream>
using namespace std;
int main () {
    int food,drinks,tax,totalbill,finalbill,discount,bill;
    tax=200;
    cout<<"\nenter your food amount:";
    cin>>food;
    cout<<"\nenter your drinks amount:";
    cin>>drinks;
    cout<<"\nservice tax= " << tax <<endl;
    totalbill=food+drinks+tax;
    cout<<"\nyour  TOTAL BILL WITHOUT DISCOUNT ="<<totalbill<<endl;

    if(bill>=2000 && bill<6000)
{cout<<"\nyou are eligible for 20% discount";
discount = totalbill*0.2;
finalbill = totalbill-discount;
cout<<"\nyour FINAL BILL = "<< finalbill <<endl;
}
else if (bill>=6000)
{cout<<"\nyou are eligible for 40% discount";
discount = totalbill*0.4;
finalbill = totalbill-discount;
cout<<"\nyour FINAL BILL(incl discount) = "<< finalbill <<endl;}
else
{ cout<<"sorry you are not eligible for the discount";}
cout<<"THANK YOUR FOR YOUR VISIT!";
return 0;
}
    
