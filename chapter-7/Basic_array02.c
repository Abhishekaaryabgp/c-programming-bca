// write a program which calculate the bca first semesters total marks // 
#include <stdio.h>
#include <conio.h>
int main()
{
    int marks[6] ,sum;
    printf("Enter the marks of Computer Fundamental :\n");
    scanf("%d", marks[0]);
    printf("Enter the marks of Math(01) :\n");
    scanf("%d", marks[1]);
    printf("Enter the marks of Math(02) :\n");
    scanf("%d", marks[2]);
    printf("Enter the marks of M.S Office :\n");
    scanf("%d", marks[3]);
    printf("Enter the marks of Managment :\n");
    scanf("%d", marks[4]);
    printf("Enter the marks of C programming language :\n");
    scanf("%d", marks[5]);  
    sum = marks[0] + marks[1] + marks[2] + marks[3] + marks[4] +marks[5];
    printf("The total marks is %d", sum);
    return 0;
}
