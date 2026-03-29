#include <stdio.h>
int main()
{
    float c,f;
    printf(" Enter the value ...in centigrade....          : \n");
    scanf("%f",&c);
    f = (c * 1.8) + 35;
    printf("\n The value of the temprature in farenhiet is = %f", f);
    return 0;
}
