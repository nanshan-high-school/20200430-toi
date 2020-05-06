#include <iostream>
using namespace std;
long long power(long long num, int sp);

int main() {
    long long int N,T,total;
    cin >> N;
    cin >> T;
    if(T == 0){
    cout << 0;
    }

    for (int i = 0; i < T; i++) {
        total = N * power(2,i + 1);
        if (total == N + T) {
            cout << i + 1;
        }

        
    }
}


long long power(long long num, int sp) {
    long long res = 1;
    for (int i = 0; i < sp; i++) {
        res *= num;
    }
    return res;
}