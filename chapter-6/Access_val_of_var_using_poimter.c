//To access the value pointed to bye a printer//?
#include <stdio.h>
#include <conio.h>
int main()
{
    float x, y;
    float *ptr;
    x = 25.5;
    ptr = &x;
    y = *ptr;
    printf("The value of x is %f\n", x);
    printf("%f is stored at address %u\n", x, &x);
    printf("%f is stored at address %u\n", x, &x);
    printf("%f is stored at address %u\n", *ptr, ptr);
    printf("%f is stored at address %u\n", ptr, &ptr);
    printf("%f is stored at address %u\n", y, &y);
    return 0;
}