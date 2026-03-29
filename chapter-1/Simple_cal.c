#include <stdio.h>
int main()
{
    int m = 5, n = 3;
    m += n -= m;
    printf("%d %d\n", m, n);

    return 0;
}
