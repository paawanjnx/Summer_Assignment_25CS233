// wap to create contact management systems

// WAP to Create Contact Management System

#include <iostream>
using namespace std;

int main()
{
    string name = "", phone = "";
    int choice;

    do
    {
        cout << "\n===== Contact Management System =====";
        cout << "\n1. Add Contact";
        cout << "\n2. View Contact";
        cout << "\n3. Delete Contact";
        cout << "\n4. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "\nEnter Contact Name: ";
            cin >> name;

            cout << "Enter Phone Number: ";
            cin >> phone;

            cout << "Contact Saved Successfully!\n";
        }
        else if(choice == 2)
        {
            if(name == "")
            {
                cout << "No Contact Found!\n";
            }
            else
            {
                cout << "\nContact Name : " << name;
                cout << "\nPhone Number : " << phone << endl;
            }
        }
        else if(choice == 3)
        {
            if(name == "")
            {
                cout << "No Contact to Delete!\n";
            }
            else
            {
                name = "";
                phone = "";
                cout << "Contact Deleted Successfully!\n";
            }
        }
        else if(choice == 4)
        {
            cout << "Thank You!\n";
        }
        else
        {
            cout << "Invalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}