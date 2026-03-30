#include <stdio.h>
#include <conio.h>
int main()
{
    int marks[5], sum;
    printf("enter the one student marks\n");
    scanf("%d %d %d %d %d\n", &marks[0], &marks[1], &marks[2], &marks[3], &marks[4]);
    sum = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];
    printf("Total students marks is %d", sum);
    return 0;
}
