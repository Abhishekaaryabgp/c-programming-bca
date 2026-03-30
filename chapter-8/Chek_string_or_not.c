#include <stdio.h>
#include <string.h>
int main()
{
    char st[20],c;
    int temp = 0,i;
    printf("Enter the strings character :\n");
    scanf("%s",st);
    printf("Enter the character to find :\n");
    scanf("%c",&c);
    for ( i = 0; i < strlen(st)&&st[i]!=c; i++)
    if (i<strlen(st))
    {
        printf("\n Character not found !");
    }
    
    return 0;
}
