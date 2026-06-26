// check wether a number is divisible by both 5 and 11.
#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter a number"<<endl;
    cin >>n;
    if (n%5==0 && n%11==0)
    {cout<<"number is divisible by both 5 and 11";
    }
    else 
    { 
        cout<<"number is not divisible by either 5 or 11 or both";
    }
    return 0;
}