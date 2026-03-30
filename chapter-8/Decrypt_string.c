#include <stdio.h>
//Little Decryption program in c.
void Decrypt(char *pt)
{
    char *ptr = pt;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}
int main()
{

    char pt[20];
    printf("Enter your code..::..::..::..");
    scanf("%s",pt);
    Decrypt(pt);
    printf("Decrypted strings is %s\n", pt);
    return 0;
}
