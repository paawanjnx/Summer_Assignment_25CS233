// write a program to create menu driven claculator 
// WAP to Create Menu Driven Calculator

#include <iostream>
using namespace std;

int main()
{
    int choice;
    float num1, num2, result;

    cout << "===== MENU DRIVEN CALCULATOR =====";
    cout << "\n1. Addition";
    cout << "\n2. Subtraction";
    cout << "\n3. Multiplication";
    cout << "\n4. Division";
    cout << "\nEnter Your Choice: ";
    cin >> choice;

    cout << "\nEnter First Number: ";
    cin >> num1;

    cout << "Enter Second Number: ";
    cin >> num2;

    if(choice == 1)
    {
        result = num1 + num2;
        cout << "\nAddition = " << result;
    }
    else if(choice == 2)
    {
        result = num1 - num2;
        cout << "\nSubtraction = " << result;
    }
    else if(choice == 3)
    {
        result = num1 * num2;
        cout << "\nMultiplication = " << result;
    }
    else if(choice == 4)
    {
        if(num2 != 0)
        {
            result = num1 / num2;
            cout << "\nDivision = " << result;
        }
        else
        {
            cout << "\nDivision by zero is not possible!";
        }
    }
    else
    {
        cout << "\nInvalid Choice!";
    }

    return 0;
}