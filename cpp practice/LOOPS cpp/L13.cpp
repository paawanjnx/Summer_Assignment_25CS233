#include<iostream>
using namespace std;

int main() {
    int n, rev = 0, ld;

    cout << "Enter a number: ";
    cin >> n;

    int original = n;   // Save after input

    while (n > 0) {
        ld = n % 10;
        n = n / 10;
        rev = (rev * 10) + ld;
    }

    if (original == rev) {
        cout << "Number is palindrome";
    }
    else {
        cout << "Number is not palindrome";
    }

    return 0;
}