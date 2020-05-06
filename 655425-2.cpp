#include <iostream>
using namespace std;

int main() {
    int N = 0;
    int T = 0;
    int total = 0;
    cin >> N;
    cin >> T;
    total = (N + T) / N;
    for (int i = 0; i <= total; i++){
        if (total / 2 != 1){
            total /= 2;
        }
        else {
            cout << i + 1;
            break;
        }
    }
}