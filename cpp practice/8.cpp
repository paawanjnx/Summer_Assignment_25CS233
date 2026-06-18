// check wether a year is leap year.
#include<iostream>
using namespace std;
int main () {
    int year;
    cout<<"enter a year";
    cin>>year;
    if (year%4==0 || year%100==0)   // % ( modulus is  for remainder) ,, or operator is imp here
    { 
        cout<<"its a leap year";
    }
    
else 
{ 
    cout<<"not a leap year";

}

    return 0;
}