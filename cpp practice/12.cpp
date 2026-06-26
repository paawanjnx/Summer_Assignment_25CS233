//check wether a traingle is equilateral isoceles scalene.
#include<iostream>
using namespace std;
int main () {
    int s1,s2,s3; // s=sides
cout<<"enter all three sides of the triangle:";
cin>> s1>>s2>>s3;
 
if(s1==s2 && s2==s3 && s3==s1)
{
    cout<<"the triangle is equilateral";
}
else if ( s1==s2 || s2==s3 || s1==s3)
{
    cout<<"trianlge is isoceles";
}
else if (s1!=s2 && s2!=s3 && s1!=s3)
{ cout<<"traingle is scalene";
}
return 0;
}