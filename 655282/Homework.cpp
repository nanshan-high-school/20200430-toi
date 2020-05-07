#include <iostream>
using namespace std;

int main() {
  int R;
  cin >> R;

  int A;
  cin >> A;

  if (A == R) {
    A -=3;
  }

  if (R - A > A) {
    cout << A << "+" << R - A << "=" << R;
  } else {
    cout << R - A << "+" << A << "=" << R;
  }
  
}
