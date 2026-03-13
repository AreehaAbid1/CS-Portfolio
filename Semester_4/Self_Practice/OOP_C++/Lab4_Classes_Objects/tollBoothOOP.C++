#include<iostream>
using namespace std;

class Tollbooth{
    private:
    unsigned int totalNumOfCars;
    double totalAmountOfMoney;
    public:
    Tollbooth(){
        totalNumOfCars = 0;
        totalAmountOfMoney = 0;
    }

    //payingCar method
    void payingCar(){
        totalNumOfCars+=1;
        totalAmountOfMoney+=0.50;
    }

    //noPayingCar method
    void noPayingCar(){
        totalNumOfCars+=1;
    }

    //display method
    void display(){
        cout<<"Total Number of Cars: "<<totalNumOfCars<<endl;
        cout<<"Total Amount of Money: "<<totalAmountOfMoney<<"$"<<endl;
    }
};

int main(){
    Tollbooth t1;
    int choice = 1;
    cout<<"===TOLLBOOTH==="<<endl;
    
    while(choice != 0){
    cout<<"Enter 1 for paying car, Enter 2 for non-paying car and Enter 0 for exit!"<<endl;
    cin>>choice;
    if(choice == 1){
            t1.payingCar();
        }
        else if(choice == 2){
            t1.noPayingCar();
        }
        else if(choice == 0){
            cout<<"Exitng Program"<<endl;
        }
        else{
            cout<<"Invalid Choice!"<<endl;
        }
    };

    t1.display();
    return 0;
}