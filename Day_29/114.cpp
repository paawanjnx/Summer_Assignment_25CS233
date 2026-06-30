// Write a program to Create menu-driven array operations system.


#include<iostream>
using namespace std;

int main()
{
    int a[10], n, i, choice, item, found = 0, max;

    cout << "Enter Number of Elements: ";
    cin >> n;

    cout << "Enter Array Elements:\n";
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    do
    {
        cout << "\n===== Array Operations =====";
        cout << "\n1. Display Array";
        cout << "\n2. Search Element";
        cout << "\n3. Find Largest Element";
        cout << "\n4. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "\nArray Elements: ";
            for(i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
        }
        else if(choice == 2)
        {
            cout << "\nEnter Element to Search: ";
            cin >> item;

            found = 0;
            for(i = 0; i < n; i++)
            {
                if(a[i] == item)
                {
                    found = 1;
                    break;
                }
            }

            if(found == 1)
                cout << "Element Found.";
            else
                cout << "Element Not Found.";
        }
        else if(choice == 3)
        {
            max = a[0];

            for(i = 1; i < n; i++)
            {
                if(a[i] > max)
                    max = a[i];
            }

            cout << "Largest Element = " << max;
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