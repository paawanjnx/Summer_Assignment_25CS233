// mobile recharge plan selector.
#include<iostream>
using namespace std;
int main() { 
    int recharge_amount;
    cout<<"welcome to JIO RECHARGE";
    cout<<" monthly plans are; \n199\n299\n399" <<"\n yearly plans are: \n799\n999\n1999"<<endl;

    cout<< "enter your recharge amount:";
    cin>>recharge_amount;
    switch (recharge_amount)
    {
        case 199:
        cout<<"monthly plan selected";
            cout<<"\n1gb data per day and unlimited voice calls and text messages";
            break;
            case 299:
            cout<<"monthly plan selected";
            cout<<"\n2gb data per day and unlimited voice calls and text messages";
            break;
            case 399:
            cout<<"monthly plan selected";
             cout<<"\n2gb data per day and unlimited voice calls and text messages with ott";
             break;
             case 799:
             cout<<"yearly plan selected";
             cout<<"\n 1.5gb data per day for 3 months and unlimited voice calls";
             break;
             case 999:
             cout<<"yearly plan selected";
             cout<<"\n 2gb data per day for 3 months and unlimited voice calls with netflix and spotify subscription";
             break;
             case 1999:
             cout<<"yearly plan selected";
             cout<<"\n4gb data per day for 6 months and unlimited voice calls with multiple ott subscriptions and all perks from above plans";
             break;
             default :
            cout<<"no valid plan amount entered";
    }
    return 0;
}
    