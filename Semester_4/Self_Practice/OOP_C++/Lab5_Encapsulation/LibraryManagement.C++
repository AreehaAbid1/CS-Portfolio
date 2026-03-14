#include<iostream>
#include<string>
using namespace std;

class Book{
    private:
    string title;
    string author;
    float price;
    static float discount;
    public:
    Book(string t, string a, float p){
        title = t;
        author = a;
        price = p;
    }
    void discountedPrice(){
        float afterdiscount= price - (price * discount);
        cout<<"After Discount: "<<afterdiscount<<endl;
    }
    //getters
    string getTitle(){
        return title;
    }
    string getAuthor(){
        return author;
    }
    float getPrice(){
        return price;
    }
    //setters
    void setTitle(string t){
        title = t;
    }
    void setAuthor(string a){
        author = a;
    }
    void setPrice(float p){
        price = p;
    }
};

float Book :: discount = 0.25;

int main(){
    Book b1("Harry Potter", "JK Rowling", 15.8);
    cout<<b1.getTitle()<<endl<<b1.getAuthor()<<endl<<b1.getPrice()<<endl;
    b1.discountedPrice();
    cout<<endl<<endl;
    b1.setPrice(22.9);
    cout<<b1.getTitle()<<endl<<b1.getAuthor()<<endl<<b1.getPrice()<<endl;
    b1.discountedPrice();
    cout<<endl<<endl;

    Book b2("Space, Time and Dimensions", "Areeha Abid", 100.0);
    cout<<b2.getTitle()<<endl<<b2.getAuthor()<<endl<<b2.getPrice()<<endl;
    b2.discountedPrice();
    cout<<endl<<endl;
    b2.setTitle("Space, Time, Dimensions and Ocean Mysteries");
    cout<<b2.getTitle()<<endl<<b2.getAuthor()<<endl;
    b2.discountedPrice();
    cout<<endl<<endl;

    Book b3("Theory of Relativity", "Newton", 11.99);
    cout<<b3.getTitle()<<endl<<b3.getAuthor()<<endl<<b3.getPrice()<<endl;
    b3.discountedPrice();
    cout<<endl<<endl;
    b3.setAuthor("Albert Einstein");
    cout<<b3.getTitle()<<endl<<b3.getAuthor()<<endl;
    b3.discountedPrice();
}