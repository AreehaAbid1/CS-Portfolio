#include <iostream>
#include <string>
using namespace std;

class sales {
protected:
    float sales_figures[3];
public:
    void getdata() {
        cout << "Enter sales for last 3 months:\n";
        for(int i = 0; i < 3; i++) {
            cout << "Month " << i+1 << ": ";
            cin >> sales_figures[i];
        }
        cin.ignore();
    }
    void putdata() {
        cout << "Sales figures (last 3 months): ";
        for(int i = 0; i < 3; i++) {
            cout << sales_figures[i] << " ";
        }
        cout << endl;
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

class book : public publication, public sales {
private:
    int page_count;
public:
    void getdata() {
        publication::getdata();
        cout << "Enter page count: ";
        cin >> page_count;
        sales::getdata();
        cin.ignore();
    }
    void putdata() {
        publication::putdata();
        cout << "Page count: " << page_count << endl;
        sales::putdata();
    }
};

class tape : public publication, public sales {
private:
    float playing_time;
public:
    void getdata() {
        publication::getdata();
        cout << "Enter playing time: ";
        cin >> playing_time;
        sales::getdata();
        cin.ignore();
    }
    void putdata() {
        publication::putdata();
        cout << "Playing time: " << playing_time << " minutes" << endl;
        sales::putdata();
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
