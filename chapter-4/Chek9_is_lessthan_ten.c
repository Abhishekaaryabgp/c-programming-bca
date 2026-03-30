#include <stdio.h>
int main()
{
    int x;
    printf("Enter value for x: \n");
    scanf("%d", &x);

    while (x <= 10)
    {
        printf("\n %d", x);
        x++;
    }

    return 0;
} 
