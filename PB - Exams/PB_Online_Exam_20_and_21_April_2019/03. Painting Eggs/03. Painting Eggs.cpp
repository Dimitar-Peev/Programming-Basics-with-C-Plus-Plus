#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	string size, color;
	int batches;
	cin >> size >> color >> batches;

	double pricePerBatch = 0.0;

	if (size == "Large") {
		if (color == "Red") {
			pricePerBatch = 16.0;
		}
		else if (color == "Green") {
			pricePerBatch = 12.0;
		}
		else if (color == "Yellow") {
			pricePerBatch = 9.0;
		}
	}
	else if (size == "Medium") {
		if (color == "Red") {
			pricePerBatch = 13.0;
		}
		else if (color == "Green") {
			pricePerBatch = 9.0;
		}
		else if (color == "Yellow") {
			pricePerBatch = 7.0;
		}
	}
	else if (size == "Small") {
		if (color == "Red") {
			pricePerBatch = 9.0;
		}
		else if (color == "Green") {
			pricePerBatch = 8.0;
		}
		else if (color == "Yellow") {
			pricePerBatch = 5.0;
		}
	}

	double totalRevenue = batches * pricePerBatch;
	double profit = totalRevenue * 0.65;

	cout << fixed << setprecision(2);
	cout << profit << " leva." << endl;

	return 0;
}
