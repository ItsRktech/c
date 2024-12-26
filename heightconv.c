#include<stdio.h>
#include<conio.h>

int main()
{
    int ht,ft,in;
    printf("Enter the height in inches:");
    scanf("%d",&ht);

    ft = ht / 12;
    ht = ht % 12;
    in = ht;

    printf("The height is %dfeet %dinches.",ft,in);

    getch();
    return 0;
}