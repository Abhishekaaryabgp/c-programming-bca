#include <stdio.h>
int main()
{
    int r;
    float pi = 3.14, area, cir;
    printf("\n Enter the radious of circle   ");
    scanf("%d", &r);
    area = pi * r * r;
    printf("\n area = %f", area);
    cir = 2 * pi * r;
    printf("\n Circumferece = %f", &cir);
    return 0;
}
