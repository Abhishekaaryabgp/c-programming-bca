#include <string.h>
#include <stdio.h>
#include <conio.h>
int main()
{
    char st1[25] = "Hey ";
    char *st2 = "Hey ";
    int a = strcmp(st1, st2);
    printf("\n Now the string 2 value is %d.\n ", a);
    return 0;
}