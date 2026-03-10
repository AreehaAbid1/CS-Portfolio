#include <iostream>
#include <string>
using namespace std;

enum diskType { CD, DVD };

class publication {
protected:
    string title;
    float price;
public:
    void getdata() {
        cout << "Enter title: ";
        getline(cin, title);
        cout << "Enter price: ";
        cin >> price;
    }
    void putdata() {
        cout << "Title: " << title << endl;
        cout << "Price: $" << price << endl;
    }
};

class disk : public publication {
private:
    diskType type;
public:
    void getdata() {
        publication::getdata();
        char ch;
        cout << "Enter disk type (c for CD, d for DVD): ";
        cin >> ch;
        type = (ch == 'c' || ch == 'C') ? CD : DVD;
        cin.ignore();
    }
    void putdata() {
        publication::putdata();
        cout << "Disk type: " << (type == CD ? "CD" : "DVD") << endl;
    }
};

int main() {
    disk d;
    d.getdata();
    d.putdata();
    return 0;
}
