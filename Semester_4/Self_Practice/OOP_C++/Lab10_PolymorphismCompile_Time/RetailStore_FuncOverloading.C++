#include<iostream>
using namespace std;
#include<string>

class RetailStore{
    public:
    RetailStore(){}

    void generateInvoice(string name, int quantity, float price){
        float unitWisePrice = price*quantity;
        cout<<"---INVOICE OF UNIT BASED PRODUCT---"<<endl;
        cout<<"Product: "<<name<<endl;
        cout<<"Quantity: "<<quantity<<endl;
        cout<<"Price per unit: "<<price<<endl;
        cout<<"Total price of "<<quantity<<" "<<name<<": "<<unitWisePrice<<endl;
    }

void generateInvoice(string name, float weight, float price){
        float weightWisePrice = price*weight;
        cout<<"---INVOICE OF WEIGHT BASED PRODUCT---"<<endl;
        cout<<"Product: "<<name<<endl;
        cout<<"Weight: "<<weight<<endl;
        cout<<"Price per kg: "<<price<<endl;
        cout<<"Total price of "<<name<<" of "<<weight<<" kgs: "<<weightWisePrice<<endl;
    }

};


int main(){
    RetailStore r1;
    r1.generateInvoice("Notebook", 3, 6.5f);
    r1.generateInvoice("Fruits", 5.5f, 3.2f);
}