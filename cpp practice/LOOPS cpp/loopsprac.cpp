
#include<iostream>
using namespace std;

int main () {
   int s;
    
    cout<<"enter side";
    cin>>s;
   

    for(int i=1;i<=s;i++) { 
      for ( int j=1;j<=s;j++) { 
         cout<<(char)(i+64);
      }
      cout<<endl;
   }
   return 0;
}