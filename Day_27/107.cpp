// wap to create salary management system 
#include <iostream>
using namespace std;

int main() {
    int empId;
    char name[50];
    float salary;

    cout << " Salary Management System " << endl;

    cout << "Enter Employee ID: ";
    cin >> empId;

    cin.ignore();

    cout << "Enter Employee Name: ";
    cin.getline(name, 50);

    cout << "Enter Salary: ";
    cin >> salary;

    cout << "\n----- Employee Salary Details -----" << endl;
    cout << "Employee ID   : " << empId << endl;
    cout << "Employee Name : " << name << endl;
    cout << "Salary        : " << salary << endl;

    return 0;
}