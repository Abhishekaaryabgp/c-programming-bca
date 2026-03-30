#include <stdio.h>
int main()
{
    int i, sum = 0;

    for (i = 1; i < 100; i++)
    {
        printf("%d no is %d\n", i, 1);
        sum = sum + 1;
    }
    printf("sum = %d\n", sum);

    return 0;
}
