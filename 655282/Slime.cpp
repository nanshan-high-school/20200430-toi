#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int T;
  cin >> T;

  if (N != 1) {
    T /= N;
    N /= N;
  }

  for (int i = 0; i < 20; i++) {
    if (N + T == pow(2,i)) {
      cout << i;
    }
  }
}
