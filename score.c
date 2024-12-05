#include<stdio.h>
#include<conio.h>

void main()
{
    int rollno;
    float msub1, msub2, msub3, msub4, msub5, msum, score;
    printf("Enter the roll number of student:");
    scanf("%d",&rollno);
    printf("Enter the marks of 5 subjects:");
    scanf("%f%f%f%f%f",&msub1, &msub2, &msub3, &msub4, &msub5);
    msum = msub1 + msub2 + msub3 + msub4 + msub5;
    score = (msum/500)*100;
    printf("The student's roll number is %d and score is %f%.",rollno, score);
    getch();
}