// Write a program to Create menu-driven string operations system.
// WAP to Create Menu-Driven String Operations System

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str1[100], str2[100];
    int choice;

    cout << "Enter First String: ";
    cin >> str1;

    do
    {
        cout << "\n===== String Operations =====";
        cout << "\n1. Find Length";
        cout << "\n2. Copy String";
        cout << "\n3. Concatenate Strings";
        cout << "\n4. Compare Strings";
        cout << "\n5. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Length of String = " << strlen(str1);
        }
        else if(choice == 2)
        {
            strcpy(str2, str1);
            cout << "Copied String = " << str2;
        }
        else if(choice == 3)
        {
            cout << "Enter Second String: ";
            cin >> str2;

            strcat(str1, str2);
            cout << "Concatenated String = " << str1;
        }
        else if(choice == 4)
        {
            cout << "Enter Second String: ";
            cin >> str2;

            if(strcmp(str1, str2) == 0)
                cout << "Strings are Equal";
            else
                cout << "Strings are Not Equal";
        }
        else if(choice == 5)
        {
            cout << "Thank You!";
        }
        else
        {
            cout << "Invalid Choice!";
        }

    } while(choice != 5);

    return 0;
}