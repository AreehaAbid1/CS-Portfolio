// 4. A bank wants to manage customer accounts using a C++ program. Each account has an
// account number and balance. Define a class BankAccount where the deposit and
// withdrawal functions are defined outside the class. The program should take another
// BankAccount object as an argument to transfer money from one account to another.
// Implement the class with appropriate functions and demonstrate a money transfer between
// two accounts using object as an argument.
#include<iostream>
using namespace std;

class BankAccount{
    private:
    int accountNum;
    double accountBal;
    public:
    //parameterized constructor
    BankAccount(int an, double ab){
        accountNum = an;
        accountBal = ab;
    }

    //deposit method declaration
    void deposit(int received);
    
    //withdrawal method declaration
    void withdrawal(int removal);

    //transfer function
    void transfer(BankAccount &b1, int amount){
        withdrawal(amount);
        b1.deposit(amount);
    }

    //display
    void display(){
        cout<<"Current Balance: "<<accountBal<<endl;
    }
};

void BankAccount :: deposit(int received){
    accountBal+=received;
}

void BankAccount :: withdrawal(int removal){
    accountBal-=removal;
}

int main(){
    cout<<"CASH TRANSFER"<<endl;
    BankAccount account1(101, 34000);
    BankAccount account2(202, 12000);

    account1.transfer(account2, 1000);
    cout<<"ACCOUNT 1 BALANCE"<<endl;
    account1.display();
    account2.display();

    account2.transfer(account1, 2000);
    cout<<"ACCOUNT 2 BALANCE"<<endl;
    account2.display();

    cout<<"ACCOUNT 1 BALANCE"<<endl;
    account1.display();
    return 0;
}