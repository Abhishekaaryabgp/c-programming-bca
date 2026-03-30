#include <stdio.h>
int main()
{
    //Programme is runing but it gives wrong out put so skip this programme//
    int skip;
    int i;
    printf(" Enter your value : \n");
    scanf("%d",&i);

    for ( i = 0; i < 99; i++)
    {
        printf("\n the value is %d",i);
        if (i!=skip)
        continue;
        else
        {
            printf("%d \n",i);
        }
        
    }
    
    return 0;
}
