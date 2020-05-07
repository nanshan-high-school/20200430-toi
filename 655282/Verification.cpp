#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int T = N;

  int list[9];

  for (int i = 0; i < 9; i++) {
    list[i] = N % 10;
    N /= 10;
  }

  for (int j = 0; j < 7; j++) {
    for (int i = 0; i < 8; i++) {
      if (list[i] > list[i + 1]) {
        int temp = list[i];
        list[i] = list[i + 1];
        list[i + 1] = temp;
      }
    }
  }

  if (list[8] * list[8] + list[7] * list[7] == T % 1000) {
    cout << "Good Morning!";
  } else {
    cout << "SPY!";
  }
}
