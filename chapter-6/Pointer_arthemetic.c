#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, x, y, z, *p1, *p2;
    a = 2;
    b = 12;
    p1 = &a;
    p2 = &b;
    x = *p1 * *p2 - 6;
    y = 4* - *p2 / *p1 * 10;
    printf("Address of a = %d\n", p1);
    printf("Address of b = %d\n", p2);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    *p2 = *p2 + 3;
    *p1 = *p2 - 5;
    z = *p1 + *p2 - 6;
    printf("\n a = %d\nb = %d\n", a, b);
    printf("z = %d", z);

    return 0;
}
