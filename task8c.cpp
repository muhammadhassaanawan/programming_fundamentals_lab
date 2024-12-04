#include <iostream>
using namespace std;

int main ()  {
int base , exponent;
long long result = 1;

cout << "Enter the base : ";
cin >> base ;
cout << "Enter the exponent : ";
cin >> exponent ;

if(exponent == 0) {
result = 1;
}
else {
for (int i = 1; i <= exponent; ++i) {
result *= base ;
     }

} 
cout << base << " raised to the power of " << exponent << " is : " << result << endl;
 
return 0;

} 
