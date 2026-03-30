#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *) calloc(5 ,sizeof(int));
    for (int i = 1; i < 5; i++)
    {
        printf("Enter the element of %d elements :\n", i);
        scanf("%d", &ptr[i]);
    }
    ptr = realloc(ptr, 10 * sizeof(int));
    for (int i = 1; i < 10; i++)
    {
        printf("Enter the element of %d elements :\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 1; i < 10; i++)
    {
        printf("The elements of %d is %d :\n", i, ptr[i]);
    }

    return 0;
}
