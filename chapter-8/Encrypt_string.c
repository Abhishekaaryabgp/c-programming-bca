#include <stdio.h>
//Little encryption program in c.
void encrypt(char *pt)
{
    char *ptr = pt;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}
int main()
{

    char pt[20];
    printf("Enter your code..::..::..::..");
    scanf("%s",pt);
    encrypt(pt);
    printf("Encrypted strings is %s\n", pt);
    return 0;
}
