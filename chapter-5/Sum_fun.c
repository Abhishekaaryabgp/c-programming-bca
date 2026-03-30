#include <stdio.h>
#include <conio.h>
int sum(int a, int b); //function prototype//
int main()
{
    int a, b, c, d, e, f;
    printf("\n Enter the value ...to perform all calculations :");
    scanf("%d %d", &a, &b);
    c = a + b;
    d = a * b; //FUnction call//
    e = a - b;
    f = a / b;
    printf("The value of Addition is %d\n", c);
    printf("The value of Multiplication is %d\n", d);
    printf("The value of Subtraction is %d\n", e);
    printf("The value of Division is %d\n", f);
    return 0;
}
int sum(int a, int b) //function defination//
{
    int c, d, e, f;
    c = a + b;
    d = a * b;
    e = a - b;
    f = a / b;
    return c;
}