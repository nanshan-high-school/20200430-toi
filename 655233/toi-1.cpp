#include <iostream>
using namespace std;

int main() {
    long long total,num;

    do {
        cin >> total;
        cin >> num;
    } while (total < num);

    
    if (num == total) {
        num -= 3;
    }

    int plus;
    plus = total - num;

    if (plus > num) {
        cout << num << "+" << plus << "=" << total;
    } else {
        cout << plus << "+" << num << "=" << total;
    }
    

}
