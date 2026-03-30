#include<iostream>
#include<string>
using namespace std;

class CustomerOrder{
    bool choice;
    string food;
    public:
    virtual void placeOrder() = 0;

    string getFood(){
        return food;
    }

    void foodMenu(){
        cout<<"What do you want to order: "<<endl;
        cin>>food;
    }

    void checkStock(){
        cout<<"Is stock available? (1=yes, 0=no)"<<endl;
        cin>>choice;
        if(choice==1){
            cout<<"Stock is available"<<endl;
        }
        else{
            cout<<"Stock is not available"<<endl;
        }
    }

    void verifyPayment(){
        cout<<"Is payment verified? (1=yes, 0=no)"<<endl;
        cin>>choice;
        if(choice==1){
            cout<<"Payment Verified"<<endl;
        }
        else{
            cout<<"Payment Not Verified"<<endl;
        }
    }

    virtual void Invoice(){
        cout<<"===INVOICE==="<<endl;
        cout<<"Food Ordered: "<<food<<endl;
    }
};

class ProcessOrder : public CustomerOrder{
    string name;
    string city;
    public:
void Invoice() override {
    cout<<"===INVOICE==="<<endl;
    cout<<"Customer name: "<<name<<endl;
    cout<<"Customer city: "<<city<<endl;
    cout<<"Food: "<<getFood()<<endl;
}

    void placeOrder() override {
        cout<<"---WELCOME TO AREEHA'S ONLINE FOOD SERVICE---"<<endl;
        cout<<"Enter your name: "<<endl;
        cin>>name;
        cout<<"Enter your City name: "<<endl;
        cin>>city;
        foodMenu();
        checkStock();
        verifyPayment();
        Invoice();
    }
};

int main(){
    ProcessOrder order;
    order.placeOrder();
}