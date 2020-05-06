#include <iostream>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    
    long long a;
    int number[9] = {0},big[2] = {0},b,total = 0,last;
    bool check[9] = {false};

    cin >> a;

    last = a % 1000;

    for(int i = 8; i >= 0; i--){
        number[i] = a % 10;
        a /= 10;
    }

    for(int i = 0; i <= 1; i++){
        for(int j = 0; j <= 8; j++){
            if(check[j] == false && number[j] >= big[i]){
                big[i] = number[j];
                b = j;
            }
        }
        check[b] = true;
    }

    for(int i = 0; i <= 1; i++){
        total += big[i] * big[i];
    }

    if(total == last){
        cout << "Good Morning!";
    }else{
        cout << "SPY!";
    }
}
