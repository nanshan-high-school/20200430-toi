#include <iostream>
using namespace std;

int main() {
    long long int R,A,num;
    cin >> R;   
    cin >> A;

    if (R == A) {
        A -= 3;
        num = R - A;
        if (num >= A) {
            cout << A << "+" << num << "=" << R;
        } else {
            cout << num << "+" << A << "=" << R;
        }  
    } else {
        num = R - A;
        if (num >= A) {
            cout << A << "+" << num << "=" << R;
        } else {
            cout << num << "+" << A << "=" << R;
        }
    }
}