#include <string.h>
#include <stdio.h>
#include <conio.h>
int main()
{
    char st1[25] = "Hey = ";
    char *st2 = "Abhishek Aarya : aastamesta babe ... ";
    strcat(st1, st2);
    printf("\n Now the st2 value is %s\n ", st1);
    return 0;
}