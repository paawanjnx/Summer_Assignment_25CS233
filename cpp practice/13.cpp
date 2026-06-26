// check wether three sides can form a valid triangle (( i.e sum of 2 sides is euqal to the third one))
#include<iostream>
using namespace std;
int main () {
    int a,b,c; // let a,b,c be three sides.
    cout<<"enter three sides:";
    cin >>a>>b>>c;

    if(a+b>c && b+c>a && c+a>b)
{
    cout<<"its a valid traingle";
}
 else
{cout<<"not a valid triangle";
}
    return 0;
}