#include<stdio.h>

int main()
{
float numbers[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};

float max = numbers[0];
for(int i = 0; i < 10; i++)
{
    if(numbers[i] > max)
    {
        max = numbers[i];
    }
}
printf("The maximum number is: %f\n", max);

float min = numbers[0];
for(int i = 0; i < 10; i++)
{
    if(numbers[i] < min)
    {
        min = numbers[i];
    }
}
printf("The minimum number is: %f\n", min);
return 0;
}