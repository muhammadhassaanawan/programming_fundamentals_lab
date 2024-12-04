#include <iostream>
using namespace std;

int main ()   {
char choice ;

do {
int number;
cout << "Enter a number to print its multiplication table : ";
cin >> number ;

cout << "Multiplication table of " << number << " : " << endl;
 
for (int i = 1; i <= 10; ++i) {
cout << number <<" * " << i <<" = " << number * i << endl;

}

cout << " Do you want to enter another number? (Y/y for yes , any other key to exit ):" ;
cin >> choice ;
}  
while (choice == 'Y' || choice == 'y' );
cout << "Program terminated. "<< endl;

return 0;

}
  