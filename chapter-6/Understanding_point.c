#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 122;
    int *j = &i; // j will now store the addreses of i//
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The address of i is %u\n", &i);
    printf("The address of i is %u\n", &*j);
    printf("The address of j is %u\n",&j);
    return 0;
}
