#include <iostream>
using namespace std;

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int oddCount = 0, evenCount = 0, primeCount = 0;

    for (int i = 1; i <= 20; ++i) {
        if (i % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
        primeCount += isPrime(i);
    }

    cout << "In the range from 1 to 20 : " << endl;
    cout << " Odd numbers: " << oddCount << endl;
    cout << " Even numbers: " << evenCount << endl;
    cout << " Prime numbers: " << primeCount << endl;

    return 0;
}

