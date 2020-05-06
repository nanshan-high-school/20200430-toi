#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;
    for (int i = 0; i < 9; i++) {
        n[i] -= '0';
    }

    int lastThree = n[6] * 100 + n[7] * 10 + n[8];


    int max1 = -1, num = -1;
    for (int i = 0; i < 9; i++) {
        if (n[i] > max1) {
            max1 = n[i];
            num = i;
        }
    }

    int max2 = -1;
    for (int i = 0; i < 9; i++) {
        if ((n[i] > max2) && (i != num)) {
            max2 = n[i];
        }
    }

    if (lastThree == max1 * max1 + max2 * max2) {
        cout << "Good Morning!";
    } else {
        cout << "SPY!";
    }
}