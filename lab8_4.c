#include<stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int temp;

    // Reversing the array using pointers
    for(int i = 0; i < 5 / 2; i++) {
        temp = *(arr+i);
        *(arr+i) = *(arr+4-i);
        *(arr+4-i) = temp;
    }

    // Displaying reversed array
    printf("Reversed array: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    return 0;
}
