#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int months;
    cin >> months;

    const double waterPerMonth = 20.0;
    const double internetPerMonth = 15.0;

    double totalElectricity = 0.0;
    double totalWater = months * waterPerMonth;
    double totalInternet = months * internetPerMonth;
    double totalOther = 0.0;

    for (int i = 0; i < months; i++) {
        double electricity;
        cin >> electricity;

        totalElectricity += electricity;

        double monthlyOther = (electricity + waterPerMonth + internetPerMonth) * 1.2;
        totalOther += monthlyOther;
    }

    double totalAll = totalElectricity + totalWater + totalInternet + totalOther;
    double average = totalAll / months;

    cout << fixed << setprecision(2);
    cout << "Electricity: " << totalElectricity << " lv" << endl;
    cout << "Water: " << totalWater << " lv" << endl;
    cout << "Internet: " << totalInternet << " lv" << endl;
    cout << "Other: " << totalOther << " lv" << endl;
    cout << "Average: " << average << " lv" << endl;

    return 0;
}
