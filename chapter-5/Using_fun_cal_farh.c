#include <stdio.h>
#include <conio.h>
int table(int fahr, int celsius);
int main()
{
    int i;
    int n = 20;
    int convertion = (n - 32) * (9 / 5);
    printf("Temp convertion programe \n");
    for (i = 0; i < 20; i++)
    {
        printf("%d %6d\n", (convertion));
    }

    return 0;
}
int table(int fahr, int celsius)
{

    int total = 0;
    total += fahr;
    total += celsius;
    return total;
}