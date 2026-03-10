#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    float balance;
public:
    BankAccount(int accNum, float bal) : accountNumber(accNum), balance(bal) {}
    void display() const {
        cout << "Account Number: " << accountNumber << ", Balance: $" << balance << endl;
    }
    friend void deposit(BankAccount& acc, float amount);
    friend void withdraw(BankAccount& acc, float amount);
    void transfer(BankAccount& from, float amount) {
        if (from.balance >= amount) {
            from.balance -= amount;
            balance += amount;
        }
    }
};

void deposit(BankAccount& acc, float amount) {
    acc.balance += amount;
}

void withdraw(BankAccount& acc, float amount) {
    if (acc.balance >= amount)
        acc.balance -= amount;
}

int main() {
    BankAccount acc1(1001, 5000.0f);
    BankAccount acc2(1002, 3000.0f);
    acc1.display();
    acc2.display();
    acc2.transfer(acc1, 1000.0f);
    acc1.display();
    acc2.display();
    return 0;
}