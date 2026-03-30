#include <stdio.h>
#include <conio.h>
printAddress(int a)
{
    printf("The address of a is %u\n", &a);
}
int main()
{
    int x = 10;
    int y = 15;
    int z = 11;

    printf("\n The value of x is %d\n", x);
    printAddress(x);
    printf("\n The address of x is %u\n", &x);
    printf("\n The value of y is %d\n", y);
    printf("\n The address of y is %u\n", &y);
    printf("\n The value of z is %d\n", x);
    printf("\n The address of z is %u\n", &x);
    return 0;
} 