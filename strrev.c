#include<stdio.h>

int main()
{
int l = 0, i = 0;
char str[1000], rev[1000];
printf("Enter a string: ");
scanf("%s", str);

// Calculate the length of the string
while (str[l] != '\0')
{
    l++;
}

// Reverse the string
int j = l - 1;
while (i < l) {
    rev[i] = str[j];
    i++;
    j--;
}
rev[i] = '\0'; 
// Null-terminate the reversed string

printf("The reverse of the string is %s.\n", rev);
return 0;
}