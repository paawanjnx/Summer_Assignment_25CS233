// check wether a number is 3 digit number.
#include<iostream>
using namespace std;
int main () {
      int n;
      cout<<"enter a number";
      cin>> n;

      if(n>=100 && n<=999)
      {cout<<"its a three digit number";}

      else
      { cout<<"not a three digit number";}
      return 0;
}