#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	cin >> n;

	int totalSugar = 0;
	int totalFlour = 0;
	int maxSugar = 0;
	int maxFlour = 0;

	for (int i = 0; i < n; ++i) {
		int sugar, flour;
		cin >> sugar >> flour;

		totalSugar += sugar;
		totalFlour += flour;

		if (sugar > maxSugar) {
			maxSugar = sugar;
		}

		if (flour > maxFlour) {
			maxFlour = flour;
		}
	}

	int sugarPacks = ceil(totalSugar / 950.0);
	int flourPacks = ceil(totalFlour / 750.0);

	cout << "Sugar: " << sugarPacks << endl;
	cout << "Flour: " << flourPacks << endl;
	cout << "Max used flour is " << maxFlour << " grams, max used sugar is " << maxSugar << " grams." << endl;

	return 0;
}
