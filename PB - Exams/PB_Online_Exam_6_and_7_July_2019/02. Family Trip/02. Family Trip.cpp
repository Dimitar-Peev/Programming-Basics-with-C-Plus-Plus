#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double budget, pricePerNight;
	int nightsCount, additionalPercent;

	cin >> budget >> nightsCount >> pricePerNight >> additionalPercent;

	if (nightsCount > 7) {
		pricePerNight *= 0.95;
	}

	double sum = (nightsCount * pricePerNight) + ((additionalPercent / 100.0) * budget);

	double diff = abs(budget - sum);
	cout << fixed << setprecision(2);
	if (budget >= sum) {
		cout << "Ivanovi will be left with " << diff << " leva after vacation." << endl;
	}
	else {
		cout << diff << " leva needed." << endl;
	}

	return 0;
}