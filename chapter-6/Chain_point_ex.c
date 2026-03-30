#include <stdio.h>
int main()
{
    int x, *p1, **p2, ***p3;
    x = 210;
    p1 = &x;

    p2 = &p1;

    p3 = &p2;
    printf("\n The value of x is %d", ***p3);
    return 0;
}
