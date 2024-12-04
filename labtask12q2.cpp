
   #include <iostream>
   using namespace std;


void calculateRentalCost(int daysRented, int milesDriven, int &totalCost) {
    int baseFeePerDay = 25; 
    int costPerMile = 15;        
    totalCost = (baseFeePerDay * daysRented * 100) + (costPerMile * milesDriven);

    if (daysRented > 30) {
        totalCost = totalCost * 80 / 100; 
    } else if (daysRented < 15) {
        totalCost += (199 * daysRented); 
    }
}

int main() {
    int daysRented;
    int milesDriven;
    int totalCost; 
 
    cout << "Welcome to the Car Rental Company!" << endl;
    cout << "Please enter the number of days you want to rent the car: ";
    cin >> daysRented;

    cout << "Please enter the number of miles you plan to drive: ";
    cin >> milesDriven;

    calculateRentalCost(daysRented, milesDriven, totalCost);

    int dollars = totalCost / 100; 
    int cents = totalCost % 100;    

    cout << "The total cost of your car rental is: $" << dollars << "." << (cents < 10 ? "0" : "") << cents << endl;

    return 0;
}