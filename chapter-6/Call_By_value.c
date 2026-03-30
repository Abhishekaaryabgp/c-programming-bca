#include <stdio.h>
#include <conio.h>
int sum(int a, int b);
int main()
{
    int a = 5, b = 3;
    printf("The value of a and b is %d and %d\n", a, b);
    printf("The value of 5 and 3 is %d and %d\n", a, b);
    printf("The value of a and b after the function call is %d and %d\n", a, b);
    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    a = 3233;
    b = 2222;
}