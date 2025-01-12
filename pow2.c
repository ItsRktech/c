/*C program to check number is power or 2 or not.*/
 
#include <stdio.h>
 
int main() {
    int num, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int tempNum = num; tempNum > 1; tempNum /= 2) {
        if (tempNum % 2 != 0) {
            flag = 1;
        }
    }

    if (flag == 0 && num > 0)
        printf("%d is a number that is the power of 2.\n", num);
    else
        printf("%d is not the power of 2.\n", num);

    return 0;
}
