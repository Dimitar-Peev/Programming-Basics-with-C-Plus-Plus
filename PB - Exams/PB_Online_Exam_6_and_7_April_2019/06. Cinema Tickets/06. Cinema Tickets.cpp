#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int totalTickets = 0;
    int studentTickets = 0;
    int standardTickets = 0;
    int kidTickets = 0;

    string filmName;
    getline(cin, filmName);

    while (filmName != "Finish") {

        int freeSeats;
        cin >> freeSeats;
        cin.ignore(); 

        int ticketsSold = 0;

        for (int i = 0; i < freeSeats; i++) {
            string ticketType;
            getline(cin, ticketType);

            if (ticketType == "End") {
                break;
            }

            if (ticketType == "student") {
                studentTickets++;
            }
            else if (ticketType == "standard") {
                standardTickets++;
            }
            else if (ticketType == "kid") {
                kidTickets++;
            }

            ticketsSold++;
        }

        double percentFull = (ticketsSold * 100.0) / freeSeats;
        cout << fixed << setprecision(2);
        cout << filmName << " - " << percentFull << "% full." << endl;

        totalTickets += ticketsSold;

        getline(cin, filmName);
    }

    cout << "Total tickets: " << totalTickets << endl;
    if (totalTickets > 0) {
        cout << fixed << setprecision(2);
        cout << (studentTickets * 100.0 / totalTickets) << "% student tickets." << endl;
        cout << (standardTickets * 100.0 / totalTickets) << "% standard tickets." << endl;
        cout << (kidTickets * 100.0 / totalTickets) << "% kids tickets." << endl;
    }
    else {
        cout << "0.00% student tickets." << endl;
        cout << "0.00% standard tickets." << endl;
        cout << "0.00% kids tickets." << endl;
    }

    return 0;
}
