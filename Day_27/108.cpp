// wap to create marksheet generation system 
#include<iostream>
using namespace std;
int main () { 
    char name[50];
    int roll,phy,chem,math,eng,phe,totalmarks,sum;
float totalperc;

    cout<<"enter your name";
    cin>>name;

    cout<<" \nenter your roll";
    cin>>roll;
cout<<"\nenter your marks out of 100";
    cout<<"\nenter your Phy marks";
    cin>>phy;

    cout<<"\nenter your chem marks";
    cin>>chem;
    cout<<"\nenter your math marks";
    cin>>math;
    cout<<"\nenter your engmarks";
    cin>>eng;
    cout<<"\nenter your Phe marks";
    cin>>phe;

    sum = phy + chem + math + eng + phe;
totalmarks = sum;
    totalperc = (totalmarks*100)/500;
cout<<"\n";

cout<<"\n___REPORT CARD___";
cout<<"\n";
cout<<"name is :"<<name<<endl;
cout<<"roll number is :"<<roll<<endl;
    cout<<"total marks = " <<totalmarks << endl;
    cout<<"toal percentage = "<<totalperc << endl;
    
return 0 ;
}