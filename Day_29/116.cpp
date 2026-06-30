// Write a program to Create inventory management system.
// WAP to Create Inventory Management System

#include<iostream>
using namespace std;

int main()
{
    int choice;
    string product;
    int quantity;
    float price;

    do
    {
        cout << "\n===== Inventory Management System =====";
        cout << "\n1. Add Product";
        cout << "\n2. View Product";
        cout << "\n3. Update Quantity";
        cout << "\n4. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "\nEnter Product Name: ";
            cin >> product;

            cout << "Enter Quantity: ";
            cin >> quantity;

            cout << "Enter Price: ";
            cin >> price;

            cout << "\nProduct Added Successfully!\n";
        }
        else if(choice == 2)
        {
            if(product == "")
            {
                cout << "\nNo Product Available!\n";
            }
            else
            {
                cout << "\nProduct Name : " << product;
                cout << "\nQuantity     : " << quantity;
                cout << "\nPrice        : " << price << endl;
            }
        }
        else if(choice == 3)
        {
            if(product == "")
            {
                cout << "\nNo Product Available!\n";
            }
            else
            {
                cout << "Enter New Quantity: ";
                cin >> quantity;

                cout << "Quantity Updated Successfully!\n";
            }
        }
        else if(choice == 4)
        {
            cout << "\nThank You!";
        }
        else
        {
            cout << "\nInvalid Choice!";
        }

    } while(choice != 4);

    return 0;
}