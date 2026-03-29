#include <stdio.h>
int main()
{
    int div;
    float a, b, sum, mul,sub;
    printf("\n Sir enter the num ...");
    scanf("%f %f", &a, &b);
    sum = a + b;
    printf("\n sum = %f", sum);
    mul = a * b;
    printf("\n mul %f", mul);
    div = a / b;
    printf("\n div = %d", div);
    sub = a - b;
    printf("\n sub = %f", sub);
    

    return 0;
}
