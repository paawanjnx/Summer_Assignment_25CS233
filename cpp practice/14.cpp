//find roots of quadratic equation real roots , equal roots , imaginary roots. (good q)
#include<iostream>
#include<cmath>
using namespace std;
int main () {
    int a,b,c,D,x,y;
cout<<"enter the coefficients:";
cin>>a>>b>>c;
D=b*b-4*a*c;
if(D>0 && a>0)
{ 
x = ((-b+sqrt(D))/(2*a));
y = ((-b-sqrt(D))/(2*a));
cout<<"roots are = "<<x<<y;
cout<<"\nroots are real and unequal";
}
else if (a>0 && D==0)
{x = ((-b+sqrt(D))/(2*a));
y = ((-b+sqrt(D))/(2*a));
cout<<"roots are = "<<x<<y;
cout<<"\nroots are real and equal";
}
else if (a>0 && D<0)
{ cout<<"\nroots are imaginary";}
return 0;
}