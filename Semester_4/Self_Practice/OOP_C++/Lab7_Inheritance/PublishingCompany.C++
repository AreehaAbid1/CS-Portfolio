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

class Book : public Publication{
    private:
    int pageCount;
    public:
    void takeBookInput(){
        Publication::takeInput();
        cout<<"Enter number of pages in book: "<<endl;
        cin>>pageCount;
    }
    void displayBook(){
        Publication::display();
        cout<<"PAGE COUNT: "<<pageCount<<endl;
    }
};

class Tape : public Publication{
    private:
    float playingTime;
    public:
    void takeTapeInput(){
        Publication::takeInput();
        cout<<"Enter playing time: "<<endl;
        cin>>playingTime;
    }
    void displayTape(){
        Publication::display();
        cout<<"PLAYING TIME: "<<playingTime<<endl;
    }
};

int main(){
    Book b1;
    b1.takeBookInput();
    b1.displayBook();
    Tape t1;
    t1.takeTapeInput();
    t1.displayTape();
}