#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 21;
    int *ptr,**ptr_ptr;//pointer to pointer//

    ptr = &i;
    ptr_ptr = &ptr;
    printf("the value of i is %d\n", **ptr_ptr);
    return 0;
}