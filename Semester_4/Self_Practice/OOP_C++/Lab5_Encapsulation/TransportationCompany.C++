#include<iostream>
#include<string>
using namespace std;

class Ticket{
    private:
    int ticketNum;
    string passengerName;
    int seatNum;
    static int numOfTicketsSold;
    public:
    Ticket(int tn, string pn, int sn){
        ticketNum = tn;
        passengerName = pn;
        seatNum = sn;
        numOfTicketsSold++;
    }
    Ticket(){}
    //getter
    int getTicketNum(){
        return ticketNum;
    }
    string getPassengerName(){
        return passengerName;
    }
    int getSeatNum(){
        return seatNum;
    }
    int getNumOfTicketsSold(){
        return numOfTicketsSold;
    }
    //setter
    void setTicketNum(int tn){
        ticketNum = tn;
    }
    void setPassengerName(string pn){
        passengerName = pn;
    }
    void setSeatNum(int sn){
        seatNum = sn;
    }
};

int Ticket :: numOfTicketsSold = 0;

int main(){
    Ticket t1(111, "Areeha", 1);
    Ticket t2(112, "Tabinda", 2);
    Ticket t3(113, "Abid", 3);
    cout<<"===TICKET DETAILS==="<<endl;
    cout<<"\t1st Ticket\t"<<endl;
    cout<<t1.getPassengerName()<<endl<<t1.getTicketNum()<<endl<<t1.getSeatNum()<<endl;
    cout<<"\t2nd Ticket\t"<<endl;
    cout<<t2.getPassengerName()<<endl<<t2.getTicketNum()<<endl<<t2.getSeatNum()<<endl;
    cout<<"\t3rd Ticket\t"<<endl;
    cout<<t3.getPassengerName()<<endl<<t3.getTicketNum()<<endl<<t3.getSeatNum()<<endl;
    Ticket t4;
    cout<<"TOTAL TICKETS SOLD: "<<t4.getNumOfTicketsSold();
}