#include <iostream>
using namespace std;

int main() {
    double p, q, r, w, x, y, z;
    char choice;

    do {
        cout << "Enter value of p: ";
        cin >> p;
        
        cout << "Enter value of q: ";
        cin >> q;

        cout << "Enter value of r: ";
        cin >> r;
        
        cout << "Enter the value of w: ";
        cin >> w;
        
        cout << "Enter the value of x: ";
        cin >> x;

        cout << "Enter the value of y: "; 
         cin >> y;
         
         if (q != 0 && x != 0) {
 z = (p * r - (int(q)) * ((int(p * r) / int(q)))) + (w / x) - y;
cout << "The value of z is: " << z << endl;
   } else {
            cout << "Error: Division by zero" << endl;
        }
  cout << "Do you want to calculate again (y/n)? : ";
 } while (choice == 'y' || choice == 'Y'); 
return 0; 
}
