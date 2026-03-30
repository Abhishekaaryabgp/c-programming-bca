#include <stdio.h>
int main()
{
    int i;
    printf(" Enter the value for n : \n");
    scanf("%d", &i);

    while (i <= 99)
    {
        printf(" \n The value is %d", i);
        i++;
        if (i == 18)
        {
            break;
        }
    }

    return 0;
}
