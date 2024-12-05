#include<stdio.h>
#include<conio.h>

void main(){
	int p,t,r;
	float i;
	printf("Enter the principal, time and rate:");
	scanf("%d%d%d", &p,&t,&r);
	i = (p*t*r)/100;
	printf("The simple interest is %f.", i);
	getch();
}
