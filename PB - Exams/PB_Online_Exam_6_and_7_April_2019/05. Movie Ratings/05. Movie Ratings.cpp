#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int filmCount;
    cin >> filmCount;
    cin.ignore(); 

    string filmName;
    double rating;

    string maxRatingFilm, minRatingFilm;
    double maxRating = -1.0;
    double minRating = 11.0;
    double sumRating = 0.0;

    for (int i = 0; i < filmCount; i++) {
        getline(cin, filmName);
        cin >> rating;
        cin.ignore();

        sumRating += rating;

        if (rating > maxRating) {
            maxRating = rating;
            maxRatingFilm = filmName;
        }

        if (rating < minRating) {
            minRating = rating;
            minRatingFilm = filmName;
        }
    }

    double average = sumRating / filmCount;

    cout << fixed << setprecision(1);
    cout << maxRatingFilm << " is with highest rating: " << maxRating << endl;
    cout << minRatingFilm << " is with lowest rating: " << minRating << endl;
    cout << "Average rating: " << average << endl;

    return 0;
}
