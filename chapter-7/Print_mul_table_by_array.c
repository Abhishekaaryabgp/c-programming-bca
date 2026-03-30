#include <stdio.h>
#define ROWS 5
#define COLUMNS 5

int main()
{
    int row, column, product[ROWS][COLUMNS];
    int i, j;
    printf("Multiplication table :\f");
    printf("\n");
    for (j = 1; j <= COLUMNS; j++)
    {
        printf("8%d", j);
        printf("\n");
        printf("_____________________________\n");
    }
    for (i = 0; i < ROWS; i++)
        row = i + 1;
    printf("%2d |", row);
    for (j = 1; j <= COLUMNS; j++)
    {
        column = j;
        product[i][j] = row * column;
        printf("8%d", product[i][j]);
    }

    {
        printf("__________________\n");
    }

    return 0;
}
