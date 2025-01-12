#include <stdio.h>

int main() {
    int number, i;
    int isPerfectSquare = 0; // Flag to indicate if it's a perfect square

    // Prompt user for input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check for perfect square using a for loop
    for (i = 0; i * i <= number; i++) {
        if (i * i == number) {
            isPerfectSquare = 1; // Set flag if a perfect square is found
        }
    }

    // Output the result
    if (isPerfectSquare) {
        printf("%d is a Perfect Square.\n", number);
    } else {
        printf("%d is not a Perfect Square.\n", number);
    }

    return 0;
}
