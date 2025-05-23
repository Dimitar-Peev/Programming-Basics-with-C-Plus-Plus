#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int nylon, paint, thinner, hours;

	cin >> nylon >> paint >> thinner >> hours;

	const double nylonPrice = 1.50;
	const double paintPrice = 14.50;
	const double thinnerPrice = 5.00;
	const double bagPrice = 0.40;

	int totalNylon = nylon + 2;
	double totalPaint = paint * 1.10;

	double materialsCost = (totalNylon * nylonPrice)
		+ (totalPaint * paintPrice)
		+ (thinner * thinnerPrice)
		+ bagPrice;

	double workersCost = materialsCost * 0.30 * hours;

	double totalCost = materialsCost + workersCost;

	cout << fixed << setprecision(2) << totalCost << endl;
	 
	return 0;
}
