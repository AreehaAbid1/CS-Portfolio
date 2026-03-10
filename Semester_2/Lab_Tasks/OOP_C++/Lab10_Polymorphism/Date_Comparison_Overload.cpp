#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    Date(int d = 1, int m = 1, int y = 2000) {
        day = d;
        month = m;
        year = y;
    }

    bool operator > (const Date& other) {
        if (year != other.year)
            return year > other.year;
        else if (month != other.month)
            return month > other.month;
        else
            return day > other.day;
    }

    bool operator == (const Date& other) {
        return (day == other.day && month == other.month && year == other.year);
    }

    void display() {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date d1(13, 6, 2025);
    Date d2(12, 6, 2025);
    Date d3(13, 6, 2025);

    cout << "Date 1: ";
    d1.display();

    cout << "Date 2: ";
    d2.display();

    if (d1 > d2)
        cout << "Date 1 is later than Date 2" << endl;
    else
        cout << "Date 1 is not later than Date 2" << endl;

    if (d1 == d3)
        cout << "Date 1 is equal to Date 3" << endl;
    else
        cout << "Date 1 is not equal to Date 3" << endl;

    return 0;
}
