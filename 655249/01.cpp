#include <iostream>
using namespace std;

int main() {
    long long r; 
    cin >> r;        

    int a;
    do {
        cin >> a;
    } while (a > r);

    if ((r == a) && (r > 3)) {
        a -= 3;
    }

    int n = r - a;

    int temp;
    if (n > a) {
        temp = a;
        a = n;
        n = temp;
    }

    cout << n << "+" << a << "=" << r << "\n";
}