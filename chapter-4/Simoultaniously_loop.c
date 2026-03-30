#include <stdio.h>
#include <math.h>
int main()
{

    int i;
    float a, x, y1, y2;
    a = 0.4;
    printf("               X------->           \n");
    printf(" Y  --------------->>>>>>>BOOM::::::::::->>  \n");
    for (x = 0; x < 5; x = x + 0.25)
    {
        y1 = (int)(50 * exp(-a * x) + 0.5);
        y2 = (int)(50 * exp(-a * x * x / 2) + 0.5);
    }
    if (y1 == y2)
    {
        if (x == 2.5)
        {
            printf(" 0 __________________________________ |");
        }
        else
        {
            printf("  | ");
        }
        for (i = 1; i <= y1 - 1; ++i)
        {
            printf("       ");
        }
        printf("# \n");
        }
    //here the continue statement does not working (if i an writing the continue statement it will giving error)//

    if (x == 2.5)
    {
        printf(" X |");
    }
    else
    {
        printf("      |");
    }
    for (i = 1; i <= y2 - 1; ++i)
    {
        printf("    ");
    }
    printf("*");
    for (i = 1; i <= (y1 - y2 - 1); ++i)
    {
        printf("-");
    }
    printf("0 \n");
    //lets modify some statement so i can be enjoy with my code//

    if (x == 2.5)
    {
        printf("X |");
    }
    else
    {
        printf("    |");
    }
    for (i = 1; i <= (y2 - y1 - 1); ++i)
    {
        printf("-");
    }
    printf("* \n");

    printf("    |\n");

    return 0;
}
