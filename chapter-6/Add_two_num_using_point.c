#include <stdio.h>
int main()
{
    int a,b,*p, *q, sum;
    printf("Enter the Numbers \n");
    scanf("%d %d", &a, &b);
    p = &a;
    q = &b;
    sum = *p + *q;
    printf("The answer is %d\n", sum);
    return 0;
}
 