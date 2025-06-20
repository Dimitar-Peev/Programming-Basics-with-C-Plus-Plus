#include <iostream>

using namespace std;

int main() {
    int a, b, maxPasswords;
    cin >> a >> b >> maxPasswords;

    int passwordCount = 0;
    int A = 35; 
    int B = 64; 

    for (int x = 1; x <= a; x++) {
        for (int y = 1; y <= b; y++) {
            
            cout << char(A) << char(B) << x << y << char(B) << char(A) << "|";
            passwordCount++;

            A++;
            B++;

            if (A > 55) A = 35;
            if (B > 96) B = 64;

            if (passwordCount >= maxPasswords) {
                return 0; 
            }
        }
    }

    return 0;
}
