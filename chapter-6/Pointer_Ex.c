#include <stdio.h>
int main()
{
    int i = 20;
    int *j = &i;//the j will store the address of i//
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %u\n", &i);
    printf("The value of j is %d\n", &j);
    printf("The value of j is %u\n", &j);
    printf("The value of j is %u\n", *&j);
    return 0;
}