#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int magnolias, hyacinths, roses, cacti;
	cin >> magnolias >> hyacinths >> roses >> cacti;

	double giftPrice;
	cin >> giftPrice;

	double profit = ((magnolias * 3.25) + (hyacinths * 4) + (roses * 3.5) + (cacti * 8)) * 0.95;

	cout << fixed << setprecision(0);

	if (profit >= giftPrice) {
		cout << "She is left with " << floor(profit - giftPrice) << " leva." << endl;
	}
	else {
		cout << "She will have to borrow " << ceil(giftPrice - profit) << " leva." << endl;
	}

	return 0;
}
