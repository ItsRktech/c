#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float y = 1;

    for (n = 1; n <= 10; n++) {
        int isprime = 1;
        if (n <= 1) {
            isprime = 0;
        } else {
            for (int i = 2; i <= n / 2; i++) {
                if (n % i == 0) {
                    isprime = 0;
                    break;
                }
            }
        }

        if (isprime == 0) {
            int fact = 1;
            for (int j = 1; j <= n; j++) {
                fact *= j;
            }
            float sum = pow(n, 2) / fact;
            y += sum;
        }
    }

    printf("The sum of the series excluding prime numbers is %.3f.\n", y);
    return 0;
}