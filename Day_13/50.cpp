// wap to find sum and average of array.
#include <iostream>
using namespace std;

int main() {
    int n;
    float sum = 0, average;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    average = sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}