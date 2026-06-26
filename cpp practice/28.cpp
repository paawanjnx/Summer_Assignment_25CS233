// online shopping discount system
#include<iostream>
using namespace std;
int main () {
int items,gst,totalbill,finalbill,discount;
cout<<"\nPlease enter your total item's amount:";
cin>>items;
gst=items*0.18;
cout<<"gst is="<<gst<<endl;
totalbill=gst+items;
cout<<"\nYour total bill without discount is=" <<totalbill <<endl;

if(totalbill>2000 && totalbill<6000)
{ cout<<"\nYou are eligible for 25% discount!";
discount= 0.25*totalbill;
finalbill= totalbill-discount;
cout<<"\nYour final bill (incl discount) = " <<finalbill <<endl;}

else if(totalbill>=6000 && totalbill<=10000)
{ cout<<"\nYou are eligible for 40% discount!";
discount= 0.4*totalbill;
finalbill= totalbill-discount;
cout<<"\nYour final bill (incl discount) = " <<finalbill <<endl;}
else 
{cout<<"SORRY you are not eligible for any discount";}

cout<<"\nTHANK YOU FOR SHOPPING WITH US!";
return 0;



}