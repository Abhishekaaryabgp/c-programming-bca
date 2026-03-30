#include <stdio.h>
#include <conio.h>
printAddr(int a)
{
    printf("The address of a is %u\n", &a);
}
int main()
{
    int i = 4,*ptr;
    ptr = &i;
    printAddr(i);
    printf("After passing the function the address of i is %u\n",*ptr);
    
    return 0;
}