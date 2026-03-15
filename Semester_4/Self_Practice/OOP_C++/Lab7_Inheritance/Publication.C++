#include<iostream>
#include<string>
using namespace std;

class Publication{
    private:
    string title;
    float price;
    public:
    //take input func
    void takeInput(){
        cout<<"Enter Title: "<<endl;
        cin>>title;
        cout<<"Enter Price: "<<endl;
        cin>>price;
    }
    //display func
    void display(){
        cout<<"TITLE: "<<title<<endl;
        cout<<"PRICE: "<<price<<endl;
    }
};

class Sales{
    private:
    float sales[3];
    public:
    void takeSalesInput(){
        cout<<"Enter sales of previous 3 momths: "<<endl;
        for(int i =0; i<3; i++){
            cin>>sales[i];
        }
    }
    void displaySales(){
        for(int j =1; j<4; j++){
            cout<<j<<" MONTH BACK SALES: ";
            cout<<sales[j]<<endl;
        }
    }
};

class Book : public Publication, public Sales{
    private:
    int pageCount;
    public:
    void takeBookInput(){
        Publication::takeInput();
        Sales::takeSalesInput();
        cout<<"Enter number of pages in book: "<<endl;
        cin>>pageCount;
    }
    void displayBook(){
        Publication::display();
        Sales::displaySales();
        cout<<"PAGE COUNT: "<<pageCount<<endl;
    }
};

class Tape : public Publication, public Sales{
    private:
    float playingTime;
    public:
    void takeTapeInput(){
        Publication::takeInput();
        Sales::takeSalesInput();
        cout<<"Enter playing time: "<<endl;
        cin>>playingTime;
    }
    void displayTape(){
        Publication::display();
        Sales::displaySales();
        cout<<"PLAYING TIME: "<<playingTime<<endl;
    }
};

int main(){
    Book b1;
    cout<<"---Input Book Details:---"<<endl;
    b1.takeBookInput();
    cout<<endl;
    cout<<"===Display Book Details:==="<<endl;
    b1.displayBook();
    cout<<endl<<endl;
    Tape t1;
    cout<<"---Input Tape Details:---"<<endl;
    t1.takeTapeInput();
    cout<<endl;
    cout<<"===Display Tape Details:==="<<endl;
    t1.displayTape();
}