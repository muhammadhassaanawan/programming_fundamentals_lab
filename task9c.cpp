#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    cout << "Perfect numbers between 1 and 500 are:" << endl;
    for (int i = 1; i <= 500; i++) {
        if (isPerfect(i)) {
            cout << i << endl;
        }
    }
    return 0;
}