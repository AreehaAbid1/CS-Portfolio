#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int day, month, year;
public:
    void getdata() {
        cout << "Enter publication date (day month year): ";
        cin >> day >> month >> year;
    }
    void putdata() {
        cout << "Publication Date: " << day << "/" << month << "/" << year << endl;
    }
};

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

class publication2 : public publication {
protected:
    Date pub_date;
public:
    void getdata() {
        publication::getdata();
        pub_date.getdata();
    }
    void putdata() {
        publication::putdata();
        pub_date.putdata();
    }
};

class book : public publication2 {
private:
    int page_count;
public:
    void getdata() {
        publication2::getdata();
        cout << "Enter page count: ";
        cin >> page_count;
        cin.ignore();
    }
    void putdata() {
        publication2::putdata();
        cout << "Page count: " << page_count << endl;
    }
};

class tape : public publication2 {
private:
    float playing_time;
public:
    void getdata() {
        publication2::getdata();
        cout << "Enter playing time: ";
        cin >> playing_time;
        cin.ignore();
    }
    void putdata() {
        publication2::putdata();
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