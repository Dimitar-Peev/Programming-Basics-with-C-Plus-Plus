#include <iostream>

using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    for (int d1 = 1; d1 <= n; ++d1) {
        for (int d2 = 1; d2 <= n; ++d2) {
            for (char c1 = 'a'; c1 < 'a' + l; ++c1) {
                for (char c2 = 'a'; c2 < 'a' + l; ++c2) {
                    for (int d3 = 1; d3 <= n; ++d3) {
                        if (d3 > d1 && d3 > d2) {
                            cout << d1 << d2 << c1 << c2 << d3 << " ";
                        }
                    }
                }
            }
        }
    }

    return 0;
}
