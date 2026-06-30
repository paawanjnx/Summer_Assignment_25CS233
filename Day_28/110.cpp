// bank management system 
// WAP to Create Bank Management System

#include<iostream>
using namespace std;

class Bank
{
    int accNo;
    char name[30];
    float balance;

public:
    void createAccount()
    {
        cout << "\nEnter Account Number: ";
        cin >> accNo;

        cout << "Enter Account Holder Name: ";
        cin >> name;

        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "\nAccount Created Successfully!\n";
    }

    void deposit()
    {
        float amount;
        cout << "Enter Amount to Deposit: ";
        cin >> amount;

        balance += amount;
        cout << "Amount Deposited Successfully!\n";
    }

    void withdraw()
    {
        float amount;
        cout << "Enter Amount to Withdraw: ";
        cin >> amount;

        if(amount <= balance)
        {
            balance -= amount;
            cout << "Amount Withdrawn Successfully!\n";
        }
        else
        {
            cout << "Insufficient Balance!\n";
        }
    }

    void display()
    {
        cout << "\n----- Account Details -----";
        cout << "\nAccount Number : " << accNo;
        cout << "\nAccount Holder : " << name;
        cout << "\nBalance        : " << balance << endl;
    }
};

int main()
{
    Bank b;
    int choice;

    do
    {
        cout << "\n\n===== BANK MANAGEMENT SYSTEM =====";
        cout << "\n1. Create Account";
        cout << "\n2. Deposit Money";
        cout << "\n3. Withdraw Money";
        cout << "\n4. Display Account";
        cout << "\n5. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                b.createAccount();
                break;

            case 2:
                b.deposit();
                break;

            case 3:
                b.withdraw();
                break;

            case 4:
                b.display();
                break;

            case 5:
                cout << "Thank You!";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 5);

    return 0;
}