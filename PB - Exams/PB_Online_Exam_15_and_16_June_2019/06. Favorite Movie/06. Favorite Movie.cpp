#include <iostream>
#include <string>

using namespace std;

int main() {
	int procesedMovies = 0;
	int bestMovieScore = 0;
	string bestMovie;

	string movie;
	getline(cin, movie);

	while ("STOP" != movie) {
		int currentScore = 0;

		int length = movie.length();
		for (int i = 0; i < length; i++) {
			char currentCharacter = movie[i];
			currentScore += currentCharacter;

			if (islower(currentCharacter)) {
				currentScore -= 2 * length;
			}
			else if (isupper(currentCharacter)) {
				currentScore -= length;
			}
		}

		if (currentScore > bestMovieScore) {
			bestMovie = movie;
			bestMovieScore = currentScore;
		}

		if (++procesedMovies == 7) {
			cout << "The limit is reached." << endl;
			break;
		}

		getline(cin, movie);
	}

	cout << "The best movie for you is " << bestMovie << " with " << bestMovieScore << " ASCII sum." << endl;

	return 0;
}
