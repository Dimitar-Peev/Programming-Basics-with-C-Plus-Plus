#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	const double BITCOIN_TO_LEVA = 1168;
	const double DOLLAR_TO_LEVA = 1.76;
	const double CHINESE_TO_DOLLAR = 0.15;
	const double EURO_TO_LEVA = 1.95;

	int bitcoin;
	double chineseYuan;
	double commission;

	cin >> bitcoin >> chineseYuan >> commission;

	double chineseToLeva = chineseYuan * CHINESE_TO_DOLLAR * DOLLAR_TO_LEVA;
	double totalLeva = (bitcoin * BITCOIN_TO_LEVA) + chineseToLeva;
	double totalEuro = totalLeva / EURO_TO_LEVA;

	double finalAmount = totalEuro * (1 - (commission / 100));

	cout << fixed << setprecision(2) << finalAmount << endl;

	return 0;
}
