// login system : username validation , password validation 
#include<iostream> 
using namespace std;
int main () {
    int password;
    string username;
    cout<<"enter your username:";
    cin>> username;
    
    
cout<<"\nenter your password:";
cin>>password;

if (username == "paawanjnxx" && password==1234)
{cout<<"\nyou are successfully logged in";
}
else 

{ cout<<"\ninvalid username or password";
}
return 0;
}