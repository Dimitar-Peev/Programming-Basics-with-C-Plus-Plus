#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	double recordSeconds, distanceMeters, timePerMeter;
	cin >> recordSeconds >> distanceMeters >> timePerMeter;

	double totalTime = distanceMeters * timePerMeter;

	int slowdowns = static_cast<int>(distanceMeters / 50);

	totalTime += slowdowns * 30;

	cout << fixed << setprecision(2);
	if (totalTime < recordSeconds) {
		cout << "Yes! The new record is " << totalTime << " seconds." << endl;
	}
	else {
		double difference = totalTime - recordSeconds;
		cout << "No! He was " << difference << " seconds slower." << endl;
	}

	return 0;
}
