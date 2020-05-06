#include <iostream>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int n,t,a = 0,b = 1;
    cin >> n >> t;

    n /= n;
    t /= n;

    while(t != b - 1){
        b *= 2;
        a++;
    }
    
    cout << a;
}
