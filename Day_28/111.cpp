// write a program to create ticket booking system 
// WAP to Create Ticket Booking System

#include<iostream>
using namespace std;

int main()
{
    int choice, seats;
    float price = 500, total;

    cout << "===== Ticket Booking System =====";
    cout << "\n1. Book Ticket";
    cout << "\n2. Cancel Ticket";
    cout << "\nEnter Your Choice: ";
    cin >> choice;

    if(choice == 1)
    {
        cout << "Enter Number of Seats: ";
        cin >> seats;

        total = seats * price;

        cout << "\nTicket Booked Successfully!";
        cout << "\nTotal Amount: " << total;
    }
    else if(choice == 2)
    {
        cout << "Ticket Cancelled Successfully!";
    }
    else
    {
        cout << "Invalid Choice!";
    }

    return 0;
}