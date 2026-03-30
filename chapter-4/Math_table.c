#include <stdio.h>
#include <conio.h>
#include <math.h>
#define COLMAX 10
#define ROWMAX 12

int main()
{
    int row, coloumn, y;
    row = 1;
    printf(" _____________MULTIPLICATION_____________TABLE__________\n");
    printf("-------------------------------------------------------------\n");
    do
    {
        y = row * coloumn;
        printf("\n %4d", y);
        coloumn = coloumn + 1;
    } while (coloumn <= COLMAX);
    printf("\n");
        row = row + 1;
    while (row <= ROWMAX);
    {
        printf("-------------------------------------------------------------\n");
    }

    return 0;
}
