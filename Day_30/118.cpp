// WAP to Create Student Record System Using Arrays and Strings

#include<iostream>
using namespace std;

int main()
{
    int roll[10], marks[10], n, i, choice, search;
    string name[10];
    bool added = false;

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

            added = true;
            cout << "\nRecords Added Successfully!\n";
        }
        else if(choice == 2)
        {
            if(!added)
            {
                cout << "\nNo Records Found!\n";
            }
            else
            {
                cout << "\nRoll\tName\tMarks\n";
                for(i = 0; i < n; i++)
                {
                    cout << roll[i] << "\t" << name[i] << "\t" << marks[i] << endl;
                }
            }
        }
        else if(choice == 3)
        {
            if(!added)
            {
                cout << "\nNo Records Found!\n";
            }
            else
            {
                cout << "Enter Roll Number to Search: ";
                cin >> search;

                bool found = false;

                for(i = 0; i < n; i++)
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
                {
                    cout << "Student Not Found!\n";
                }
            }
        }
        else if(choice == 4)
        {
            cout << "Thank You!";
        }
        else
        {
            cout << "Invalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}