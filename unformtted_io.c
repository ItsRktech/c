#include <stdio.h>
#include<conio.h>

void main() {
    float x, y, result;
    char op;

    // Input first number
    printf("Enter two numbers: ");
    scanf("%f%f", &x,&y);

    // Input operator
    printf("Enter operator (+, -, *, /): ");
    getchar(); // To consume newline character left by previous input
    op = getchar();

  if (op=='+')
  {   
    result=x+y;
    printf("\n The sum is %f",result);
  }

  else if(op== '-')
  {
    result=x-y;
    printf("\n The difference is %f",result);
  }

  else if(op== '*')
  {
    result=x*y;
    printf("\n The product is %f",result);
  }

  else if(op=='/')
  {
    if(y==0)
    {
        printf("Error:Division by zero.");
    }
    else
    {
        result=x/y;
        printf("\n The quotient is %f",result);
    }
  }

  else
  {
    printf ("\n Invalid operator");
  }

getch();
}