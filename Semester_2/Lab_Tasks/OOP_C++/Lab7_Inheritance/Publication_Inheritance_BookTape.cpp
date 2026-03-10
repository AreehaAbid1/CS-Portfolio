#include <iostream>
#include <string>
using namespace std;

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
        cin.ignore();
    }
    void putdata() {
        cout << "Title: " << title << endl;
        cout << "Price: $" << price << endl;
    }
};

class book : public publication {
private:
    int page_count;
public:
    void getdata() {
        publication::getdata();
        cout << "Enter page count: ";
        cin >> page_count;
        cin.ignore();
    }
    void putdata() {
        publication::putdata();
        cout << "Page count: " << page_count << endl;
    }
};

class tape : public publication {
private:
    float playing_time;
public:
    void getdata() {
        publication::getdata();
        cout << "Enter playing time (minutes): ";
        cin >> playing_time;
        cin.ignore();
    }
    void putdata() {
        publication::putdata();
        cout << "Playing time: " << playing_time << " minutes" << endl;
    }
};

int main() {
    book b;
    tape t;

    cout << "Enter book details:\n";
    b.getdata();
    cout << "\nEnter tape details:\n";
    t.getdata();

    cout << "\nBook Details:\n";
    b.putdata();
    cout << "\nTape Details:\n";
    t.putdata();

    return 0;
}