// WAP to Create Mini Employee Management System

#include<iostream>
using namespace std;

int main()
{
    int id[10], salary[10], n, i, choice, search;
    string name[10];
    bool added = false;

    cout << "Enter Number of Employees: ";
    cin >> n;

    do
    {
        cout << "\n===== Employee Management System =====";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            for(i = 0; i < n; i++)
            {
                cout << "\nEmployee " << i + 1 << endl;

                cout << "Enter Employee ID: ";
                cin >> id[i];

                cout << "Enter Employee Name: ";
                cin >> name[i];

                cout << "Enter Salary: ";
                cin >> salary[i];
            }

            added = true;
            cout << "\nEmployee Records Added Successfully!\n";
        }
        else if(choice == 2)
        {
            if(!added)
            {
                cout << "\nNo Employee Records Found!\n";
            }
            else
            {
                cout << "\nID\tName\tSalary\n";

                for(i = 0; i < n; i++)
                {
                    cout << id[i] << "\t" << name[i] << "\t" << salary[i] << endl;
                }
            }
        }
        else if(choice == 3)
        {
            if(!added)
            {
                cout << "\nNo Employee Records Found!\n";
            }
            else
            {
                cout << "Enter Employee ID to Search: ";
                cin >> search;

                bool found = false;

                for(i = 0; i < n; i++)
                {
                    if(id[i] == search)
                    {
                        cout << "\nEmployee Found";
                        cout << "\nEmployee ID   : " << id[i];
                        cout << "\nEmployee Name : " << name[i];
                        cout << "\nSalary        : " << salary[i] << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                {
                    cout << "Employee Not Found!\n";
                }
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