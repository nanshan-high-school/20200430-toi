#include <iostream>
using namespace std;
int main() {
    long long int A = 0;
    long long int R = 0;
    long long int T = 0;
    cin >> A;
    cin >> R;
    if (A != R){
        T = R - A;
        cout << A << "+" << T << "=" << R;
    }
    if (A == R){
        T = R - (A - 3);
        cout << A - 3 << "+" << T << "=" << R;
    }
}