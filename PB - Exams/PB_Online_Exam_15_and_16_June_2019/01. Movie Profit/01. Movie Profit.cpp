#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string movieName;
    getline(cin, movieName);

    int daysCount;
    int ticketsCount;
    double priceTicket;
    int cinemaPercent;

    cin >> daysCount >> ticketsCount >> priceTicket >> cinemaPercent;

    double dayProfit = ticketsCount * priceTicket;
    double totalProfit = dayProfit * daysCount;
    double sumCinema = totalProfit * (cinemaPercent / 100.0);
    double finalProfit = totalProfit - sumCinema;

    cout << fixed << setprecision(2);
    cout << "The profit from the movie " << movieName << " is " << finalProfit << " lv." << endl;

    return 0;
}
