// By using one dimentional array // read value and compute sum.
#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    float X[10], value, total;
    printf("\n ENTER 10 THE REAL NUMBER :");
    for (i = 0; i < 10; i++)
    {
        scanf("%f", &value);
        X[i] = value;
    }
    total = 0.0;
    for (i = 0; i < 10; i++)
        total = total + X[i] * X[i];
        printf("\n");
    for (i = 0; i < 10; i++)
    {
        printf("X[%2d] = %5.2f\n", i + 1, X[i]);
    }
    printf("\n total number %2f\n", total);

    return 0;
}
