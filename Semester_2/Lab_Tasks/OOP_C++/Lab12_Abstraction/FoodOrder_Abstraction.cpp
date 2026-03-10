#include <iostream>
using namespace std;

class FoodOrder {
public:
    virtual void placeOrder() = 0;
};

class PizzaOrder : public FoodOrder {
public:
    void placeOrder() override {
        cout << "Checking stock for Pizza ingredients..." << endl;
        cout << "Verifying payment..." << endl;
        cout << "Cooking Pizza..." << endl;
        cout << "Generating invoice..." << endl;
        cout << "Pizza order placed successfully!" << endl;
    }
};

class BurgerOrder : public FoodOrder {
public:
    void placeOrder() override {
        cout << "Checking stock for Burger ingredients..." << endl;
        cout << "Verifying payment..." << endl;
        cout << "Cooking Burger..." << endl;
        cout << "Generating invoice..." << endl;
        cout << "Burger order placed successfully!" << endl;
    }
};

int main() {
    FoodOrder* order;
    PizzaOrder pizza;
    BurgerOrder burger;

    order = &pizza;
    order->placeOrder();

    cout << endl;

    order = &burger;
    order->placeOrder();

    return 0;
}