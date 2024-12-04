#include <iostream>
using namespace std;


int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}


int power(int x, int k) {
    int result = 1;
    for (int i = 0; i < k; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int n, x;
    double sum = 0;

    cout << "Enter value of n: ";
    cin >> n;
    cout << "Enter value of x: ";
    cin >> x;
    
    for (int k = 0; k <= n; k++) {
        sum += (double)(power(x, k)) / factorial(k);
    }

    cout << "The result of the series is: " << sum << endl;

    return 0;
}