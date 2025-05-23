#include <iostream>

using namespace std;

int main()
{
	const double penPrice = 5.80;
	const double markerPrice = 7.20;
	const double cleanerPrice = 1.20;

	int penCount, markerCount, cleanerCount;
	cin >> penCount >> markerCount >> cleanerCount;

	int percentDiscount;
	cin >> percentDiscount;

	double totalPenPrice = penCount * penPrice;
	double totalMarkerPrice = markerCount * markerPrice;
	double totalCleanerPrice = cleanerCount * cleanerPrice;

	double totalPriceBeforeDiscount =
		totalPenPrice +
		totalMarkerPrice +
		totalCleanerPrice;
	double discount = totalPriceBeforeDiscount * (percentDiscount / 100.0); 
	double totalPriceAfterDiscount = totalPriceBeforeDiscount - discount; 

	cout << totalPriceAfterDiscount << endl;

	return 0;
}