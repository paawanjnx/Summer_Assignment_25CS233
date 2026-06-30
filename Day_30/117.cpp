// Write a program to Create student record system using arrays and strings.


#include<iostream>
using namespace std;

int main()
{
    int roll[10], marks[10], n, i, choice, search;
    string name[10];

    cout << "Enter Number of Students: ";
    cin >> n;

    do
    {
        cout << "\n===== Student Record System =====";
        cout << "\n1. Add Student Records";
        cout << "\n2. Display Student Records";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            for(i = 0; i < n; i++)
            {
                cout << "\nStudent " << i + 1 << endl;

                cout << "Enter Roll Number: ";
                cin >> roll[i];

                cout << "Enter Name: ";
                cin >> name[i];

                cout << "Enter Marks: ";
                cin >> marks[i];
            }

            cout << "\nRecords Added Successfully!";
        }
        else if(choice == 2)
        {
            cout << "\nRoll\tName\tMarks\n";

            for(i = 0; i < n; i++)
            {
                cout << roll[i] << "\t" << name[i] << "\t" << marks[i] << endl;
            }
        }
        else if(choice == 3)
        {
            cout << "Enter Roll Number to Search: ";
            cin >> search;

            for(i = 0; i < n; i++)
            {
                if(roll[i] == search)
                {
                    cout << "\nStudent Found\n";
                    cout << "Roll Number : " << roll[i] << endl;
                    cout << "Name        : " << name[i] << endl;
                    cout << "Marks       : " << marks[i] << endl;
                    break;
                }
            }

            if(i == n)
            {
                cout << "Student Not Found!";
            }
        }
        else if(choice == 4)
        {
            cout << "Thank You!";
        }
        else
        {
            cout << "Invalid Choice!";
        }

    } while(choice != 4);

    return 0;
}