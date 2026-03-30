#include <stdio.h>
int main()
{
    int x,*p,y;
    x = 10;
    *p = 2;
    y = 3;
    printf("The value of x is %d",x);
    printf("The address of *p is %u",&*p);
    return 0;
}
