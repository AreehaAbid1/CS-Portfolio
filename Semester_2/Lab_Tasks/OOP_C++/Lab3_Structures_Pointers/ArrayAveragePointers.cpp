#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    float arr[size];
    float* ptr = arr;
    float sum = 0;

    cout << "Enter " << size << " numbers:\n";
    for (int i = 0; i < size; ++i) {
        cin >> *(ptr + i);
        sum += *(ptr + i);
    }

    float avg = sum / size;
    cout << "Average = " << avg << endl;

    return 0;
}
