#include <stdio.h>
int main()
{
    FILE *ptr;
    char c;
    ptr = fopen("Read_whole_file.c","r");
    c = fgetc(ptr);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(ptr);
    }

    return 0;
}
