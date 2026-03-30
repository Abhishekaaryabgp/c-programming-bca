#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the value ....\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("%d %d %d",a,++a,a++);
    return 0;
}
