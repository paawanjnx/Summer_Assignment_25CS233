// wap to create student record management system 
#include <iostream>
using namespace std;

int main() {
    int rollNo;
    char name[50];
    float marks;

    cout << "***** Student Record Management System *****" << endl;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cin.ignore();

    cout << "Enter Student Name: ";
    cin.getline(name, 50);

    cout << "Enter Marks: ";
    cin >> marks;

    cout << "\nStudent Record" << endl;
    cout << "Roll Number : " << rollNo << endl;
    cout << "Name        : " << name << endl;
    cout << "Marks       : " << marks << endl;

    if (marks >= 40)
        cout << "Result      : Pass" << endl;
    else
        cout << "Result      : Fail" << endl;

    return 0;
}