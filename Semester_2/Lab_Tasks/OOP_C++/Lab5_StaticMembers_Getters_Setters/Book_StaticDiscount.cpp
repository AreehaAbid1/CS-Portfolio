#include <iostream>
#include <vector>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;
    static double discountRate;

public:
    Book(string t, string a, double p) {
        title = t;
        author = a;
        price = p;
    }

    void setPrice(double p) {
        price = p;
    }

    double getPrice() {
        return price - (price * discountRate / 100);
    }

    static void setDiscountRate(double rate) {
        discountRate = rate;
    }

    void display() {
        cout << "Title: " << title << ", Author: " << author << ", Final Price: " << getPrice() << endl;
    }
};

double Book::discountRate = 0;

int main() {
    Book::setDiscountRate(10);
    Book b1("Book A", "Author A", 1000);
    Book b2("Book B", "Author B", 1500);
    b1.display();
    b2.display();
    return 0;
}
