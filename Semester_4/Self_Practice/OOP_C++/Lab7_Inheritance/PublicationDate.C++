// 4.	Start with the publication, book, and tape classes from the previous exercise. Now, you want to add the
// date of publication for both books and tapes. Derive a new class publication2 from publication, and add a
// date member to it. Update the book and tape classes so they inherit from publication2 instead of publication.
// Modify the getdata() and putdata() functions to include the date. Use a Date class that stores a date as three
// integers: day, month, and year.
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

class Date{
    private:
    int day;
    int month;
    int year;
    public:
    void takeDate(){
        cout<<"Enter day, month, year: "<<endl;
        cin>>day>>month>>year;
    }
    void displayD(){
        cout<<"DAY: "<<day<<endl;
        cout<<"MONTH: "<<month<<endl;
        cout<<"YEAR: "<<year<<endl; 
    }
};

class Publication2 : public Publication, public Date{
    private:
    Date publishDate;
    public:
    void takePDate(){
        cout<<"Enter publication date (day, month, year)"<<endl;
        Date::takeDate();
    }
    void displayPDate(){
        cout<<"PUBLICATAION DATE: "<<endl;
        Date::displayD();
    }
};

class Book : public Publication2{
    private:
    int pageCount;
    public:
    void takeBookInput(){
        Publication2::takeInput();
        Publication2::takePDate();
        cout<<"Enter number of pages in book: "<<endl;
        cin>>pageCount;
    }
    void displayBook(){
        Publication2::display();
        Publication2::displayPDate();
        cout<<"PAGE COUNT: "<<pageCount<<endl;
    }
};

class Tape : public Publication2{
    private:
    float playingTime;
    public:
    void takeTapeInput(){
        Publication2::takeInput();
        Publication2::takePDate();
        cout<<"Enter playing time: "<<endl;
        cin>>playingTime;
    }
    void displayTape(){
        Publication2::display();
        Publication2::displayPDate();
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