#include <stdio.h>
int main()
{
    FILE *ptr;
    int num1, num2, num3;
    ptr = fopen("test.txt", "r");

    fscanf(ptr,"%d %d %d", &num1,&num2,&num3);
    printf("The value of numbers is : %d %d %d\n",num1,num2,num3);
    return 0;
}
