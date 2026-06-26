// find the largest among three numbers
#include<iostream>
using namespace std;
int main () {
    int a,b,c;
    cout<<"enter the numbers"<<endl;
    cin>>a>>b>>c;
    if(a>b && a>c)
    { cout<<"a is largest";
    }
    else if (b>a && b>c)
    { cout<<"b is largest";}
    else if(a==b && a==c && b==c )
    { cout<<"all numbers are equal";
    }
    else 
    { 

        cout<<"c is largest";
    }


    return 0;
}