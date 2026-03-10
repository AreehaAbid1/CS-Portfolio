#include <iostream>
using namespace std;

class YearTemperature {
    float temps[12];
public:
    YearTemperature() {
        for (int i = 0; i < 12; i++)
            temps[i] = 0;
    }

    float& operator[](int index) {
        return temps[index];
    }

    void displayAll() {
        for (int i = 0; i < 12; i++)
            cout << "Month " << i + 1 << ": " << temps[i] << "°C" << endl;
    }
};

int main() {
    YearTemperature y;
    for (int i = 0; i < 12; i++) {
        cout << "Enter average temperature for month " << i + 1 << ": ";
        cin >> y[i];
    }
    cout << "All Temperatures:" << endl;
    y.displayAll();
    return 0;
}
