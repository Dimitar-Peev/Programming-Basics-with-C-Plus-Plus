#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int v, p1, p2;
	cin >> v >> p1 >> p2;

	double hours;
	cin >> hours;

	double pipe1 = p1 * hours;
	double pipe2 = p2 * hours;
	double sumWater = pipe1 + pipe2;

	cout << fixed << setprecision(2);

	if (sumWater <= v) {
		pipe1 = (pipe1 / sumWater) * 100;
		pipe2 = (pipe2 / sumWater) * 100;
		sumWater = (sumWater / v) * 100;
		cout << "The pool is " << sumWater << " % full. Pipe 1: " << pipe1 << "%. Pipe 2: " << pipe2 << "%." << endl;
	}
	else {
		sumWater = sumWater - v;
		cout << "For " << hours << " hours the pool overflows with " << sumWater << " liters." << endl;
	}

	return 0;
}