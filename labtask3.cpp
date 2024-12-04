#include <iostream> 
using namespace std;

int main  ()  {
const double POUND_RATE = 1.487;
const double FRANC_RATE = 0.172;
const double MARK_RATE = 0.584;
const double YEN_RATE = 0.00955;

double dollars;
cout << "Enter the amount in dollars: " ;
cin >> dollars;


double pounds = dollars / POUND_RATE;
double francs = dollars / FRANC_RATE;
double marks = dollars / MARK_RATE;
double yen = dollars / YEN_RATE;

cout << " Equivalent amount in British Pounds :£" << pounds << endl;
cout << "Equivalent amount in French Francs : Fr" << francs <<endl;
cout << "Equivalent amount in German Deutschemarks: DM" << marks <<endl;
cout << "Equivalent amount in Japanese Yen : ¥ " << yen <<endl;

 return 0;

}