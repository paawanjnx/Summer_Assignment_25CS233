// check wether a character is vowel or consonant
#include<iostream>
using namespace std;
int main () {
char ch;

    cout<<"enter a character";
    cin>>ch;
     if ( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' ||ch=='O' || ch=='U')
    { 
        cout<<"its a vowel";
    }
    else 
    { cout<< " its a consonant";
    }


    return 0;
}