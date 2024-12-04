#include <iostream>
using namespace std;

#define ROWS 11
#define COLS 10

int main() {
    int theater[ROWS][COLS] = {0};  // Initialize all seats to 0 (empty)
    int row, seat, totalReserved = 0;

    while (true) {
        // Ask for row and seat number
        cout << "Enter row and seat number to reserve (0 0 to stop): ";
        cin >> row >> seat;

        // Stop if the user enters 0 0
        if (row == 0 && seat == 0) break;

        // Check if the seat is valid and available
        if (row >= 0 && row < ROWS && seat >= 0 && seat < COLS) {
            if (theater[row][seat] == 0) {
                theater[row][seat] = 1;
                totalReserved++;
                cout << "Seat reserved!" << endl;
            } else {
                cout << "Seat already reserved!" << endl;
            }
        } else {
            cout << "Invalid seat number!" << endl;
        }
    }

    // Display total reserved seats
    cout << "Total reserved seats: " << totalReserved << endl;

    return 0;
}
