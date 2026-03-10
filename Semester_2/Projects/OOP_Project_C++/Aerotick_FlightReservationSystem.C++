#include <iostream>
#include <vector>
#include <ctime>
#include <windows.h>
using namespace std;

class Flight {
public:
    int flightNo;
    string source;
    string destination;
    string date;
    int totalSeats;
    int bookedSeats;

    Flight(int no, string s, string d, string dt, int seats) {
        flightNo = no;
        source = s;
        destination = d;
        date = dt;
        totalSeats = seats;
        bookedSeats = 0;
    }

    void displaySeats() {
        cout << "Total Seats: " << totalSeats
             << " | Booked: " << bookedSeats
             << " | Available: " << totalSeats - bookedSeats << endl;
    }
};

class Passenger {
public:
    string name;
    string passportNo;
    int age;

    Passenger(string n, string p, int a) {
        name = n;
        passportNo = p;
        age = a;
    }

    void display() {
        cout << "Passenger Name: " << name << ", Passport No: " << passportNo << ", Age: " << age << endl;
    }
};

class Ticket {
public:
    int ticketID;
    Flight* flight;
    Passenger* passenger;
    vector<int> seatNos;
    string ticketClass;
    int totalPrice;
    float luggageWeight;

    Ticket(int id, Flight* f, Passenger* p, vector<int> seats, string tClass, int cost, float luggage) {
        ticketID = id;
        flight = f;
        passenger = p;
        seatNos = seats;
        ticketClass = tClass;
        totalPrice = cost;
        luggageWeight = luggage;
    }

    void display() {
        cout << "\n[TICKET ID: " << ticketID << "]\n";
        passenger->display();
        cout << "Flight No: " << flight->flightNo
             << " | From: " << flight->source << " To: " << flight->destination
             << " | Date: " << flight->date << " | Seats: ";
        for (int i = 0; i < seatNos.size(); i++) cout << seatNos[i] << " ";
        cout << "\nClass: " << ticketClass
             << " | Total Price: " << totalPrice << " PKR"
             << " | Luggage: " << luggageWeight << " kg\n";
    }
};

vector<Flight> flights;
vector<Ticket> tickets;
vector<string> complaints;
int ticketCounter = 1;

Flight* searchFlight(int flightNo) {
    for (int i = 0; i < flights.size(); i++) {
        if (flights[i].flightNo == flightNo)
            return &flights[i];
    }
    return NULL;
}

// Helper: check if the booking date is valid
bool isValidBookingDate(string date) {
    int day, month, year;
    sscanf(date.c_str(), "%d/%d/%d", &day, &month, &year);

    time_t t = time(0);
    struct tm* now = localtime(&t);

    int currYear = now->tm_year + 1900;
    int currMonth = now->tm_mon + 1;
    int currDay = now->tm_mday;

    if (year < currYear) return false;
    if (year == currYear && month < currMonth) return false;
    if (year == currYear && month == currMonth && day < currDay) return false;
    if (year > currYear + 1) return false;

    return true;
}

void bookTicket() {
    string name, passport, ticketClass;
    int fno, pricePerSeat = 0, numSeats, age;
    float luggage;
    cout << "\n--- Book Ticket ---\n";
    cout << "Enter Passenger Name: ";
    cin >> name;
    cout << "Enter Passport No: ";
    cin >> passport;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Flight No: ";
    cin >> fno;

    Flight* f = searchFlight(fno);
    if (f != NULL && f->bookedSeats < f->totalSeats) {
        f->displaySeats();
        cout << "Choose Ticket Class:\n";
        cout << "1. Economy (5000 PKR)\n";
        cout << "2. Business (12000 PKR)\n";
        cout << "3. First Class (25000 PKR)\n";
        cout << "Enter your choice (1/2/3): ";
        int classChoice;
        cin >> classChoice;

        switch (classChoice) {
            case 1: ticketClass = "Economy"; pricePerSeat = 5000; break;
            case 2: ticketClass = "Business"; pricePerSeat = 12000; break;
            case 3: ticketClass = "First Class"; pricePerSeat = 25000; break;
            default: cout << "Invalid choice. Booking cancelled.\n"; return;
        }

        cout << "How many seats do you want to book? ";
        cin >> numSeats;

        if (numSeats > (f->totalSeats - f->bookedSeats)) {
            cout << "Not enough seats available. Booking cancelled.\n";
            return;
        }

        cout << "Enter Luggage Weight (kg): ";
        cin >> luggage;

        // Calculate overcharge
        int overcharge = 0;
        if (luggage > 20) {
            overcharge = (luggage - 20) * 200; // 200 PKR per kg over
        }

        // Age discount
        float discount = 0;
        if (age <= 12) discount = 0.5;
        else if (age >= 60) discount = 0.25;

        Passenger* p = new Passenger(name, passport, age);
        vector<int> seatNumbers;
        for (int i = 0; i < numSeats; i++) {
            f->bookedSeats++;
            seatNumbers.push_back(f->bookedSeats);
        }

        int totalPrice = (pricePerSeat * numSeats) + overcharge;
        totalPrice -= totalPrice * discount;

        tickets.push_back(Ticket(ticketCounter++, f, p, seatNumbers, ticketClass, totalPrice, luggage));
        cout << "Ticket Booked Successfully!\n";
        cout << "Ticket ID: " << ticketCounter - 1 << " | Total Price: " << totalPrice << " PKR\n";
    } else {
        cout << "Flight not found or no seats available.\n";
    }
}

void viewAllTickets() {
    cout << "\n--- All Tickets ---\n";
    for (int i = 0; i < tickets.size(); i++) {
        tickets[i].display();
    }
}

void cancelTicket() {
    int id;
    cout << "\nEnter Ticket ID to cancel: ";
    cin >> id;
    for (int i = 0; i < tickets.size(); i++) {
        if (tickets[i].ticketID == id) {
            char confirm;
            cout << "Are you sure you want to cancel this ticket? (y/n): ";
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y') {
                int penalty = 0.2 * tickets[i].totalPrice;
                cout << "Cancellation penalty: " << penalty << " PKR\n";
                cout << "Refund amount: " << tickets[i].totalPrice - penalty << " PKR\n";
                tickets[i].flight->bookedSeats -= tickets[i].seatNos.size();
                tickets.erase(tickets.begin() + i);
                cout << "Ticket cancelled successfully.\n";
            } else {
                cout << "Cancellation aborted.\n";
            }
            return;
        }
    }
    cout << "Ticket ID not found.\n";
}

void addFlight() {
    int no, seats;
    string src, dest, dt;
    cout << "\n--- Add Flight ---\n";
    cout << "Enter Flight No: "; cin >> no;
    cout << "Enter Source: "; cin >> src;
    cout << "Enter Destination: "; cin >> dest;
    cout << "Enter Date (DD/MM/YYYY): "; cin >> dt;

    if (!isValidBookingDate(dt)) {
        cout << "Invalid date. Flight not added.\n";
        return;
    }

    cout << "Enter Total Seats: "; cin >> seats;
    flights.push_back(Flight(no, src, dest, dt, seats));
    cout << "Flight added successfully.\n";
}

void submitComplaint() {
    string complaint;
    cout << "\n--- Submit Complaint ---\n";
    cout << "Enter your complaint: ";
    cin.ignore();
    getline(cin, complaint);
    complaints.push_back(complaint);
    cout << "Complaint submitted. Thank you for your feedback!\n";
}

void viewComplaints() {
    cout << "\n--- Complaints Log ---\n";
    if (complaints.empty()) {
        cout << "No complaints submitted yet.\n";
    } else {
        for (int i = 0; i < complaints.size(); i++) {
            cout << i + 1 << ". " << complaints[i] << endl;
        }
    }
}

void menu() {
    int choice;
    do {
        cout << "\n==== AeroTick++ Reservation System ====" << endl;
        cout << "1. Add Flight" << endl;
        cout << "2. Search Flight" << endl;
        cout << "3. Book Ticket" << endl;
        cout << "4. View All Tickets" << endl;
        cout << "5. Cancel Ticket" << endl;
        cout << "6. Submit Complaint" << endl;
        cout << "7. View Complaints" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addFlight(); break;
            case 2: {
                int fno;
                cout << "Enter Flight No to search: ";
                cin >> fno;
                Flight* f = searchFlight(fno);
                if (f != NULL) {
                    cout << "Flight Found: " << f->flightNo << " | From: " << f->source
                         << " To: " << f->destination << " | Date: " << f->date << endl;
                    f->displaySeats();
                } else {
                    cout << "Flight not found.\n";
                }
                break;
            }
            case 3: bookTicket(); break;
            case 4: viewAllTickets(); break;
            case 5: cancelTicket(); break;
            case 6: submitComplaint(); break;
            case 7: viewComplaints(); break;
            case 8: cout << "Exiting... Bye Bye!\n"; break;
            default: cout << "Invalid choice.\n"; break;
        }
    } while (choice != 8);
}

int main() {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
        FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY |
        BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY);
	system("cls"); 
	menu();
    return 0;
}