#include <stdio.h>
int strlen(char *st)
{
    char *ptr = st;
    int len = 0;
    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}
    int main()
    {
        char st[] = "Abhishek";
        int i = strlen(st);
        printf("The length of string is %d\n", i);
        return 0;
    }
