// Dinamic memory allocation...
// malocation
#include <stdio.h>
#include <stdlib.h>
int main()

{
    float *ptr;
    ptr = (float *)malloc(3 * sizeof(float));
    for (int i = 1; i < 3; i++)
    {
        printf("Enter the value of %d Elements \n",i);
        scanf("%f",&ptr[i]);
    }
    for (int i = 1; i < 3; i++)
    {
        printf("The value of %d Elements is %f\n ",i,ptr[i]);
    }

    //realloack 
    ptr = realloc(ptr,6*sizeof(int));
    for (int i = 1; i < 6; i++)
    {
        printf("Enter the value of %d Elements \n",i);
        scanf("%f",&ptr[i]);
    }
    for (int i = 1; i < 6; i++)
    {
        printf("The value of %d  Elements is %f\n ",i,ptr[i]);
    }
    
    
    return 0;
} 