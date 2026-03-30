#include <stdio.h>
void printline();
void printdot();
int main()
{
    printline();
    printf("\n                  Abhishek aarya");
    printline();
    return 0;
}
void printline()
{
    int i;
    for (i = 1; i < 40; i++)
    {
        printf("\n          _______________________             ");
        printf("\n");
    }
}
