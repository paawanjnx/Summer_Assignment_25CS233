// ATM machine.
#include<iostream>
using namespace std;
int main(){
    int pin, min_withdrawl=1000,amount,balance=7000000,num,remaining_balance;
    cout<<"enter the pin:";
    
    cin>>pin;
    

    
     if(pin==1234){
        cout<<"pin is correct enter the amount to be withdrawl";
    cin>>amount; }
      else if(pin!=1234)
    {
        cout<<"pin is wrong pls enter right pin";
        cin>>pin;
    }
    
     if (min_withdrawl<amount){
        cout<<"amount can be withdrawn";
    }
    else {
        cout<<"\n minimum withdrwal limit is 1000";
        cout<<"\n kindly enter the amount greater than 1000";
        cin>>amount;
    }
    cout<<"\nenter 1 to know your balance:";
    cin>>num;
     if(num==1){
        cout<<balance;
    }
    else if(num!=1){
        cout<<"kindly enter 1 to view your balance";
    }

    if(amount<=balance && pin==1234 && amount>=1000)

    {
        cout<<"\nenter pin:";
        cin>>pin;
         cout<< "\nmoney withdrawn";
        
     }
    else if(pin!=1234 && amount>balance && amount<1000)
    {
        cout<<"pin is wrong pls enter right pin";
        cin>>pin;
    }
    else 
    {
        cout<<"\ninsufficient balance";
    }
    
        remaining_balance=balance-amount;
        cout<<"\nremaining balance is:"<<remaining_balance;
    
    
    return 0;
}