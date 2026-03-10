#include <iostream>
using namespace std;

int main() {
    int arr[] = {45, 12, 78, 34, 90, 23}; // You can customize this
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n < 2) {
        cout << "Array must have at least two elements" << endl;
        return 0;
    }

    int largest, secondLargest;

    // Initialize largest and secondLargest properly
    if (arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (largest == secondLargest) {
        cout << "No second largest number found" << endl;
    } else {
        cout << "Second largest number is: " << secondLargest << endl;
    }

    return 0;
}
