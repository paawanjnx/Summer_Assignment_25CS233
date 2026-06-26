// wap to find longest word i n a sentence
#include <iostream>
using namespace std;

int main() {
    char str[100];
    char longest[100];
    int maxLength = 0, length = 0, start = 0;

    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            if (length > maxLength) {
                maxLength = length;

                for (int j = 0; j < length; j++) {
                    longest[j] = str[start + j];
                }
                longest[length] = '\0';
            }

            length = 0;
            start = i + 1;

            if (str[i] == '\0')
                break;
        } else {
            length++;
        }
    }

    cout << "Longest word = " << longest << endl;
    cout << "Length = " << maxLength << endl;

    return 0;
}