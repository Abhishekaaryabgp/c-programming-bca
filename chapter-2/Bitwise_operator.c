#include <stdio.h>
int main()
{
    int a = 5, b = 7, c, d, e, f;
    c = a & b;
    d = a * b;
    e = ~b;
    f = a + c;
    printf("\n here C = %d\n D = %d\n E = %d\n F = %d", c, d, e, f);

    return 0;
}
