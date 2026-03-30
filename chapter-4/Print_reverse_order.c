#include <stdio.h>
int main()
{
    int n;
    int i;
    printf(" Enter the value :");
    scanf("%d", &n);
    for (i = n; i; i--)
    {
        printf("The value of n is----> %d\n", i);
    }

    return 0;
}
