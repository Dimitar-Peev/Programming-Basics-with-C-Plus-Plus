#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string airline;
    int adultTickets, childTickets;
    double netPriceAdult, serviceFee;

    getline(cin, airline);
    cin >> adultTickets >> childTickets >> netPriceAdult >> serviceFee;

    double netPriceChild = netPriceAdult * 0.30;

    double totalAdultPrice = (netPriceAdult + serviceFee) * adultTickets;
    double totalChildPrice = (netPriceChild + serviceFee) * childTickets;

    double totalRevenue = totalAdultPrice + totalChildPrice;
    double profit = totalRevenue * 0.20;

    cout << fixed << setprecision(2);
    cout << "The profit of your agency from " << airline << " tickets is " << profit << " lv." << endl;

    return 0;
}
