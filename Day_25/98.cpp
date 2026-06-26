// wap to find common characters in a string 
#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Common characters are: ";

    for (int i = 0; str[i] != '\0'; i++) {
        bool printed = false;

        // Check if the character has already been printed
        for (int k = 0; k < i; k++) {
            if (str[i] == str[k]) {
                printed = true;
                break;
            }
        }

        if (printed)
            continue;

        int count = 0;

        // Count occurrences of the character
        for (int j = 0; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }

        if (count > 1) {
            cout << str[i] << " ";
        }
    }

    return 0;
}