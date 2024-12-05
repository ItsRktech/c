#include <stdio.h>

int main() {
    float principal, rate, time, SI;

    // Input principal, rate and time
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter time (in years): ");
    scanf("%f", &time);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    // Calculate simple interest
    SI = (principal * rate * time) / 100;

    // Print the resultant value of SI
    printf("Simple Interest = %.2f\n", SI);

    return 0;
}