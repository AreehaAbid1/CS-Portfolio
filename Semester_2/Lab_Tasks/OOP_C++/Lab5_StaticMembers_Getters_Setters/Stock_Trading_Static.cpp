#include <iostream>
using namespace std;

class Stock {
private:
    string company;
    double price;
    int shares;
    static double marketValue;

public:
    Stock(string c, double p, int s) {
        company = c;
        price = p;
        shares = s;
        marketValue += p * s;
    }

    void buyShares(int quantity) {
        if (quantity <= shares) {
            shares -= quantity;
            price += 1.5 * quantity;
            marketValue += 1.5 * quantity * price;
        }
    }

    void sellShares(int quantity) {
        shares += quantity;
        price -= 1.0 * quantity;
        marketValue -= 1.0 * quantity * price;
    }

    void display() {
        cout << "Company: " << company << ", Price: " << price << ", Shares: " << shares << endl;
    }

    static double getMarketValue() {
        return marketValue;
    }
};

double Stock::marketValue = 0;

int main() {
    Stock s1("Alpha", 100, 50);
    Stock s2("Beta", 200, 30);
    s1.buyShares(10);
    s2.sellShares(5);
    s1.display();
    s2.display();
    cout << "Total Market Value: " << Stock::getMarketValue() << endl;
    return 0;
}
