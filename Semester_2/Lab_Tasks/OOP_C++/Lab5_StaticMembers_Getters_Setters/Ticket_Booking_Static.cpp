#include <iostream>
using namespace std;

class Ticket {
private:
    int ticketNo;
    string passengerName;
    int seatNo;
    static int totalTickets;

public:
    Ticket(int t, string name, int s) {
        ticketNo = t;
        passengerName = name;
        if (s >= 1 && s <= 100)
            seatNo = s;
        else
            seatNo = -1;
        totalTickets++;
    }

    void setSeatNo(int s) {
        if (s >= 1 && s <= 100)
            seatNo = s;
    }

    void display() {
        cout << "Ticket No: " << ticketNo << ", Name: " << passengerName << ", Seat No: " << seatNo << endl;
    }

    static int getTotalTickets() {
        return totalTickets;
    }
};

int Ticket::totalTickets = 0;

int main() {
    Ticket t1(1, "Ali", 23);
    Ticket t2(2, "Sara", 45);
    Ticket t3(3, "John", 150);
    t1.display();
    t2.display();
    t3.display();
    cout << "Total Tickets Sold: " << Ticket::getTotalTickets() << endl;
    return 0;
}
