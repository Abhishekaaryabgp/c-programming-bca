// Dinamic memory allocation...
// malocation
#include <stdio.h>
#include <stdlib.h>
int main()

{
    float *ptr;
    // printf("The size of integer on my comlputer is %d byte\n",sizeof(int));
    // printf("The size of float on my comlputer is %d byte\n",sizeof(float));
    ptr = (float *)malloc(3 * sizeof(float));
    for (int i = 1; i < 3; i++)
    {
        printf("Enter the value of %d elements \n",i);
        scanf("%f",&ptr[i]);
    }
    for (int i = 1; i < 3; i++)
    {
        printf("The value of %d\n elements is %f\n ",i,ptr[i]);
    }
    
    return 0;
}