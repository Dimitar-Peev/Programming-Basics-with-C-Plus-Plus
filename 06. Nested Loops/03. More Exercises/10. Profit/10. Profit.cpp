#include <iostream>

using namespace std;

int main() {
    int coins1, coins2, banknotes5, sum;
    cin >> coins1 >> coins2 >> banknotes5 >> sum;

    for (int i = 0; i <= coins1; i++) {          
        for (int j = 0; j <= coins2; j++) {     
            for (int k = 0; k <= banknotes5; k++) {   
                int total = i * 1 + j * 2 + k * 5;
                if (total == sum) {
                    cout << i << " * 1 lv. + "
                        << j << " * 2 lv. + "
                        << k << " * 5 lv. = "
                        << sum << " lv." << endl;
                }
            }
        }
    }

    return 0;
}
