#include <iostream>
using namespace std;

int main() {
    string num;
    cin >> num;

    int number[9];
    for (int i = 0; i < 9; i++) {
        number[i] = num[i] - '0';
    }

    int place;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i - 1; j++) {
            if (number[j] < number[j + 1]) {
                place = number[j];
                number[j] = number[j + 1];
                number[j + 1] = place;
            }
        }
    }

    for (int i = 0; i < 9; i++) {
        cout << i + 1 << " = " << number[i] << "\n";
    }

    int total;
    total = (number[0]) * (number[0]) + 
            (number[1]) * (number[1]);
    
    int turn;
    turn = ((num[6] - '0') * 100)
         + ((num[7] - '0') * 10)
         + ((num[8] - '0'));

    if (total == turn) {
        cout << "Good morning!";
    } else {
        cout << "SPY!";
    }
}