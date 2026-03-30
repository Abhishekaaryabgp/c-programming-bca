#include <stdio.h>
int main()
{
    FILE *fptr;
    int num = 7;
    for (int i = 1; i <= 4; i++)
    {
    fptr = fopen("genereted.txt", "w");
    fprintf(fptr,"The number is %d",num);
    fclose(fptr);
    fptr++;
    }

    return 0;
}
