#include <stdio.h>
int main()
{

    int num1, num2, num3, num4;
    printf("\n Enter your number  :");
    scanf("%d %d %d %d ", &num1, &num2, &num3, &num4);

    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        printf("Num1 is grater :\n");
    }
    if (num2 > num3 && num2 > num4 && num2 > num1)
    {
        printf("Num2 is grater :\n");
    }
    if (num3 > num4 && num3 > num2 && num3 > num1)
    {
        printf("Num3 is grater :\n");
    }
    if (num4 > num3 && num4 > num2 && num4 > num1)
    {
        printf("Num4 is grater :\n");
    }
    
    return 0;
}
