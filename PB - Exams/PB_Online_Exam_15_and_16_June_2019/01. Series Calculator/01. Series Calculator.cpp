#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main() {
	string serialName;
	getline(cin, serialName);

	int season, episode;
	double timeForEpisode;
	cin >> season >> episode >> timeForEpisode;

	double timeForAds = 0.2 * timeForEpisode;
	double totalTimeForEpisode = timeForEpisode + timeForAds;
	double addTime = season * 10;
	double totalTime = season * episode * totalTimeForEpisode + addTime;

	cout << "Total time needed to watch the " << serialName
		<< " series is " << fixed << setprecision(0) << floor(totalTime) << " minutes." << endl;

	return 0;
}
