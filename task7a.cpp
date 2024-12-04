#include <iostream>
using namespace std;

int main() {
    int choice, quantity;
    float total = 0;
    cout<<"Welcome To The Coffee Shop"<<endl;
    cout<<"Please select your coffee by entering the number:"<<endl;
    cout << "1. Espresso - $2.50\n2. Latte - $3.00\n3. Cappuccino - $3.50\n4. Mocha - $4.00\n5. Americano - $2.25\n";
    cout << "Enter your choice (1-5): ";
    cin >> choice;
    cout << "Enter the quantity: ";
    cin >> quantity;

    switch (choice) {
        case 1: total = 2.50 * quantity;
 break;
        case 2: total = 3.00 * quantity; 
break;
        case 3: total = 3.50 * quantity; 
break;
        case 4: total = 4.00 * quantity; 
break;
        case 5: total = 2.25 * quantity; 
break;
        default: cout << "Invalid choice."; 
    }

    cout << "Total cost: $" << total << endl;
    cout<<"Enjoy your coffee!";
    
    return 0;
    
}