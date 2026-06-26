// admission eligibility pcm percentage >60% overall percentage >70%
#include<iostream>
using namespace std;
int main () {
    float physics,chemistry,maths,english,phe,it,sum ,total,pcmtotal,pcmsum,pcmperc,totalperc;
    total=600;
pcmtotal=300;

    cout<<"enter your physics%";
    cin>>physics;
     cout<<"enter your chemistry%";
    cin>>chemistry;
     cout<<"enter your maths%";
    cin>>maths;
     cout<<"enter your english%";
    cin>>english;
     cout<<"enter your phe%";
    cin>>phe;
     cout<<"enter your it%";
    cin>>it;
    sum = physics+maths+chemistry+english+phe+it;
    pcmsum = physics+chemistry+maths;
    cout<<"total sum ="<< sum <<endl;
    cout<<"pcm sum="<< pcmsum <<endl;
    pcmperc=(pcmsum/pcmtotal)*100;
    totalperc=(sum/total)*100;
    cout<<"pcm perc="<<pcmperc<<endl;
    cout<<"total perc="<<totalperc<<endl;
     
    if(pcmperc>60 && totalperc>70)
    {cout<<"you are eligible for admission";}
    else
    {cout<<"you are not eligible for admission";}
    return 0;


}