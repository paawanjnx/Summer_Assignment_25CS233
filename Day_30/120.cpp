// WAP to Develop Complete Mini Project Using Arrays, Strings and Functions

#include<iostream>
using namespace std;

int roll[10], marks[10], n;
string name[10];

void addStudent()
{
    cout << "\nEnter Number of Students: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Enter Roll Number: ";
        cin >> roll[i];

        cout << "Enter Name: ";
        cin >> name[i];

        cout << "Enter Marks: ";
        cin >> marks[i];
    }

    cout << "\nRecords Added Successfully!\n";
}

void displayStudent()
{
    if(n == 0)
    {
        cout << "\nNo Records Found!\n";
        return;
    }

    cout << "\nRoll\tName\tMarks\n";

    for(int i = 0; i < n; i++)
    {
        cout << roll[i] << "\t" << name[i] << "\t" << marks[i] << endl;
    }
}

void searchStudent()
{
    int search;
    bool found = false;

    if(n == 0)
    {
        cout << "\nNo Records Found!\n";
        return;
    }

    cout << "Enter Roll Number to Search: ";
    cin >> search;

    for(int i = 0; i < n; i++)
    {
        if(roll[i] == search)
        {
            cout << "\nStudent Found";
            cout << "\nRoll Number : " << roll[i];
            cout << "\nName        : " << name[i];
            cout << "\nMarks       : " << marks[i] << endl;

            found = true;
            break;
        }
    }

    if(!found)
        cout << "Student Not Found!\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== MINI STUDENT MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        if(choice == 1)
            addStudent();
        else if(choice == 2)
            displayStudent();
        else if(choice == 3)
            searchStudent();
        else if(choice == 4)
            cout << "Thank You!";
        else
            cout << "Invalid Choice!";

    } while(choice != 4);

    return 0;
}