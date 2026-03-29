#include <stdio.h>
int main()
{
    int a, b;
    printf("\n Enter the num for a ,b ...");
    scanf("%d %d ", &a, &b);
    a = a - b;
    b = a - b;
    a = a - b;
    printf("\n After swaping the value of a = %d \n b =%d", a,b);
    return 0;
}
