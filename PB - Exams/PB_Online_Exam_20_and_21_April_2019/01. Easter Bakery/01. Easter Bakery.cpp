#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double flourPricePerKg, flourKg, sugarKg;
	cin >> flourPricePerKg >> flourKg >> sugarKg;

	int eggCartons, yeastPackets;
	cin >> eggCartons >> yeastPackets;

	double sugarPricePerKg = flourPricePerKg * 0.75;
	double eggCartonPrice = flourPricePerKg * 1.10;
	double yeastPacketPrice = sugarPricePerKg * 0.20;

	double totalFlourCost = flourPricePerKg * flourKg;
	double totalSugarCost = sugarPricePerKg * sugarKg;
	double totalEggCost = eggCartonPrice * eggCartons;
	double totalYeastCost = yeastPacketPrice * yeastPackets;

	double totalCost = totalFlourCost + totalSugarCost + totalEggCost + totalYeastCost;

	cout << fixed << setprecision(2) << totalCost << endl;

	return 0;
}
