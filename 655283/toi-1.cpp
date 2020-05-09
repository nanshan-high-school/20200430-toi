#include <iostream>
using namespace std;

int main() {
int num[3];

for (int i = 0; i < 2; i++) {
    cin >> num[i];
}

if (num[0] >= 1){
    if (num[0] == num[1]){
        num[1] -= 3;
        num[2] = num[0] - num[1];
    }else if (num[1] >= 0 && num[1] <= 40950){
        num[2] = num[0] - num[1];
    }
}


if (num[2] >= num[1]){
    cout << num[1]<< "+"<< num[2]<< "="<< num[0];
} else if (num[2] < num[1]){
    cout << num[2]<< "+"<< num[1]<< "="<< num[0];
}

}
