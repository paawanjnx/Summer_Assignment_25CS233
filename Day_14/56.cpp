// wap to find duplicates in an array 
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Duplicate elements are: ";

    for (int i = 0; i < n; i++) {
        bool duplicate = false;

        // Check if the element has already been printed
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                duplicate = true;
                break;
            }
        }

        if (duplicate)
            continue;

        // Count occurrences
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > 1) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}