#include <stdio.h>
int main()
{
    int i = -128;
    for (i = -128; i < 128; i++)
    {
        printf("%c = %d \n", i, i);
    }

    return 0;
}
