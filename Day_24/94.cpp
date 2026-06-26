// wap to compress a string 
#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int i = 0;

    cout << "Compressed string: ";

    while (str[i] != '\0') {
        char ch = str[i];
        int count = 0;

        while (str[i] == ch) {
            count++;
            i++;
        }

        cout << ch << count;
    }

    return 0;
}