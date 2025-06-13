#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string season, groupType;
    int countStudents, countOvernight;

    cin >> season >> groupType >> countStudents >> countOvernight;

    string sportType;
    double pricePerNight = 0.0;

    if (season == "Winter") {
        if (groupType == "boys") {
            pricePerNight = 9.6;
            sportType = "Judo";
        }
        else if (groupType == "girls") {
            pricePerNight = 9.6;
            sportType = "Gymnastics";
        }
        else if (groupType == "mixed") {
            pricePerNight = 10.0;
            sportType = "Ski";
        }
    }
    else if (season == "Spring") {
        if (groupType == "boys") {
            pricePerNight = 7.2;
            sportType = "Tennis";
        }
        else if (groupType == "girls") {
            pricePerNight = 7.2;
            sportType = "Athletics";
        }
        else if (groupType == "mixed") {
            pricePerNight = 9.5;
            sportType = "Cycling";
        }
    }
    else if (season == "Summer") {
        if (groupType == "boys") {
            pricePerNight = 15.0;
            sportType = "Football";
        }
        else if (groupType == "girls") {
            pricePerNight = 15.0;
            sportType = "Volleyball";
        }
        else if (groupType == "mixed") {
            pricePerNight = 20.0;
            sportType = "Swimming";
        }
    }

    double totalPrice = countStudents * pricePerNight * countOvernight;

    if (countStudents >= 50) {
        totalPrice *= 0.5;
    }
    else if (countStudents >= 20) {
        totalPrice *= 0.85;
    }
    else if (countStudents >= 10) {
        totalPrice *= 0.95;
    }

    cout << fixed << setprecision(2);
    cout << sportType << " " << totalPrice << " lv." << endl;

    return 0;
}
