#include<stdio.h>
int main()
{
    int i;
    printf("\n Enter the number :");
    scanf("%d",&i);

    do
    {
        printf("\n natural num is = %d",i);
        i++;
    } while (i<=100);
    
    return 0;
}
