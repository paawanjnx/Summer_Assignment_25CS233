// wap to create employee management system
#include <iostream>
using namespace std;

int main() {
    int empId;
    char name[50];
    char department[30];
    float salary;

    cout << "***** Employee Management System *****" << endl;

    cout << "Enter Employee ID: ";
    cin >> empId;

    cin.ignore();

    cout << "Enter Employee Name: ";
    cin.getline(name, 50);

    cout << "Enter Department: ";
    cin.getline(department, 30);

    cout << "Enter Salary: ";
    cin >> salary;

    cout << "\nEmployee Details " << endl;
    cout << "Employee ID : " << empId << endl;
    cout << "Name        : " << name << endl;
    cout << "Department  : " << department << endl;
    cout << "Salary      : " << salary << endl;

    if (salary >= 50000)
        cout << "Status      : High Salary" << endl;
    else
        cout << "Status      : Normal Salary" << endl;

    return 0;
}