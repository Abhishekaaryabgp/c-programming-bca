#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, x, y,z, c, *p1, *p2, *p3;
    a = 21;
    b = 21;
    c = 8;
    p1 = &a;
    p2 = &b;
    p3 = &c;
    x = *p1 + *p2 + *p3;
    y = *p3 - *p1 * *p2 + *p3;
    printf("The address of a = %u\n", a);
    printf("The address of b = %u\n", b);
    printf("The address of c = %u\n", c);
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("c = %d\n",c);
    z = *p1 * *p2 * *p3;
    printf("z = %d",z); 
    return 0;
}