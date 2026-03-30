#include <stdio.h>
#include <conio.h>
int main()
{
    int y;
    printf("\n Enter the year :");
    scanf("%d", &y);

    if (y % 4 == 0)
    {
        printf(" Leap year :\n");
    }
    else if (y % 100 != 0)
    {
        printf(" Not leap year !\n");
    }
    else if (y % 400 == 0)
    {
        printf("Leap year :\n");
    }

    return 0;
}
