#include <iostream>
using namespace std;

int main() {
    long long R,A;
    do {
        cin >> R;
        cin >> A;
    } while (R < A);
    long long num = 0;
    if (R == A) {
        A = A - 3;
    }
    num = R - A;
    if (num < A) {
        cout << num << "+" << A << "=" << R;
    } else {
        cout << A << "+" << num << "=" << R;
    }
}