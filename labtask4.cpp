#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, numerator, denominator;

    while (true) {
        cout << "First Fraction:" << endl;
        cout << "Enter value of a = ";
        cin >> a;
        cout << "Enter value of b = ";
        cin >> b;

        if (b == 0) {
            cout << "Denominator cannot be zero." << endl;
            continue; // Skip to the next iteration if b is zero
        }

        cout << "First Fraction: " << a << "/" << b << endl;

        cout << "Second Fraction:" << endl;
        cout << "Enter value of c = ";
        cin >> c;
        cout << "Enter value of d = ";
        cin >> d;

        if (d == 0) {
            cout << "Denominator cannot be zero." << endl;
            continue; // Skip to the next iteration if d is zero
        }

        cout << "Second Fraction: " << c << "/" << d << endl;

        // Calculate sum of fractions
        numerator = (a * d) + (b * c);
        denominator = b * d;

        cout << "Sum = " << numerator << "/" << denominator << endl;

        break; // Exit the loop after successful input and calculation
    }

    return 0;
}
