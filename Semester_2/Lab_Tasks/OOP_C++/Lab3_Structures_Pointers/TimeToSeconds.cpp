#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    Time t1;
    cout << "Enter hours: ";
    cin >> t1.hours;
    cout << "Enter minutes: ";
    cin >> t1.minutes;
    cout << "Enter seconds: ";
    cin >> t1.seconds;

    long totalSeconds = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    cout << "Total seconds: " << totalSeconds << endl;

    return 0;
}
