#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int annualFee;
    cin >> annualFee;

    double sneakers = annualFee * 0.60; 
    double outfit = sneakers * 0.80; 
    double ball = outfit / 4.0; 
    double accessories = ball / 5.0;

    double total = annualFee + sneakers + outfit + ball + accessories;

    cout << fixed << setprecision(2) << total << endl;

    return 0;
}
