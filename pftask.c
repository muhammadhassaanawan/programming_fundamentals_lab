#include <stdio.h>

#define ROWS 11
#define COLS 10

int main() {
    int theater[ROWS][COLS] = {0};  // Initialize all seats to 0 (empty)
    int row, seat, totalReserved = 0;

    while (1) {
        // Ask for row and seat number
        printf("Enter row and seat number to reserve (0 0 to stop): ");
        scanf("%d %d", &row, &seat);

        // Stop if the user enters 0 0
        if (row == 0 && seat == 0) break;

        // Check if the seat is valid and available
        if (row >= 0 && row < ROWS && seat >= 0 && seat < COLS) {
            if (theater[row][seat] == 0) {
                theater[row][seat] = 1;
                totalReserved++;
                printf("Seat reserved!\n");
            } else {
                printf("Seat already reserved!\n");
            }
        } else {
            printf("Invalid seat number!\n");
        }
    }

    // Display total reserved seats
    printf("Total reserved seats: %d\n", totalReserved);

    return 0;
}
