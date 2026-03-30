#include <stdio.h>
int main()
{
    int a[2][3][4];
    // int *ptr = &a[2][3][4];
    // printf("\n The address of array is %u :\n",&a);
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 4; k++)
                printf("\n The address of array  a[%d][%d][%d] is %u:\n",i,j,k,&a[i][j][k]);

    return 0;
}
