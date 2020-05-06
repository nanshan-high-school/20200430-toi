#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    long int t;
    do {
        cin >> n;
        cin >> t;
        for (int i = n; i > 1; i--) {
            if ((n % i == 0) && (t % i == 0)) {
                n /= i;
                t /= i;
            }
        }
    } while ((n > 10) || (t > 40950));

    for (int i = 0; i < 16; i++) {
        if (pow(2, i) - 1 == t) {
            cout << i;
        }
    }
}