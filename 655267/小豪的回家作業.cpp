#include <iostream>
using namespace std;

int main() {
    int r,a,b;
    cin >> r >> a;
    if(r == a){
        a -= 3;
    }
    b = r - a;
    if(b > a){
        cout << a << "+" << b << "=" << r;
    }else if(b < a){
        cout << b << "+" << a << "=" << r;
    }else{
        cout << b << "+" << a << "=" << r;
    }
}
