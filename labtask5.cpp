#include <iostream>
#include <iomanip>
using namespace std;

int main ()  {
int pounds , shillings , pence;
float decimalPounds;
cout << "Enter value of pounds :" ;
cin >>pounds;
cout << "Enter the value of shillings: " ;
cin >> shillings;
cout <<"Enter pence: ";
cin >>pence;
decimalPounds = pounds + (shillings / 20.0) + (pence/240.0);
cout <<fixed << setprecision(2);
cout <<"Decimal pounds = £" <<decimalPounds<<endl;
return 0;
}