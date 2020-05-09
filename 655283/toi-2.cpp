#include <iostream>
using namespace std;

int main(){
int num[3];
int k = 0;
for (int i = 0; i < 2; i++){
    cin >> num[i];
}

if (num[0] >= 1 && num[0] <= 10){
    if (num[1] >= 0 && num[1] <= 40950){
        num[2] = num[1] / num[0];
    }
}

for (int j = 1;j < num[2] ; k++){
    j = j + j;
}

cout << k;

}
