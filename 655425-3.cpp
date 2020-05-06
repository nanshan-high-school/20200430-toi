#include <iostream>
using namespace std;

int main() {
    string code = 0;
    int code2[9] = {0};
    long long int total[100] = {0};
    long long int total2[100] = {0};
    long long int a = 0 , b = 0;
    cin >> code;
    for (int i = 0; i < code[i] != '\0'; i++){
        code2[i] = code[i] - '0';
        }
    }
     for (int y = 1; y <= 9 - 1; y++){
         for (int i = 1; i <= 9; i++){
             if (total[i] < total[i - 1]){
                 a = total[i - 1];
                 b = total[i];
                 total2[i] = a;
                 total2[i - 1] = b;
             }
         }
     }
     //9,8
     if (total2[8] ^ 2 + total2[9] ^ 2 == total[9] * 100 + total[8] * 10 + total[7]){
         cout << "Good Morning!";
     }
     else if (total2[8] ^ 2 + total2[9] ^ 2 != total[9] * 100 + total[8] * 10 + total[7]){
         cout << "SPY!";
     }
}