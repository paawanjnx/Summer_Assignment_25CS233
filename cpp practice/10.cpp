// check wether a character is uppercase or lower case.
#include<iostream>
using namespace std;
int main () {
    char ch;
    cout<<"enter a character";
    cin>> ch;
     if(ch >= 'a' && ch <= 'z')
{ 
    cout<<"lowercase character";
}
else if (ch >= 'A' && ch<='Z')
{ 
    cout<<"uppercase character";
}
    return 0;
}