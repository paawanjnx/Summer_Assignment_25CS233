// wap to create a library management system
#include <iostream>
using namespace std;

int main()
{
    int choice;
    string book = "C++ Programming";

    cout << "Library Management System\n";
    cout << "1. Display Book\n";
    cout << "2. Issue Book\n";
    cout << "3. Return Book\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Book Name: " << book;
            break;

        case 2:
            cout << "Book Issued Successfully";
            break;

        case 3:
            cout << "Book Returned Successfully";
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}