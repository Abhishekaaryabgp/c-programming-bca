#include <stdio.h>
int main()
{
    int a, b;
    printf("\n Sir enter the value for a...");
    scanf("%d", &a);
    printf("\n Sir again enter the value for b...");
    scanf("%d", &b);
    
    printf("\n The calculation of a and b is = %d", a + b);
    printf("\n The subtraction of a and b is = %d", a - b);
    printf("\n The multiplication of a and b is = %d", a * b);
    printf("\n The division of a and b is = %d", a / b);
    return 0;
}
