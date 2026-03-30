#include <stdio.h>
int main()
{
    int i,sum,sub,mul,div;
    int ptr = i;
    printf("enter the value of i :\n");
    scanf("%d %d",&i,&ptr);
    sum = i + ptr;
    sub = i - ptr;
    mul = i * ptr;
    div = i / ptr;
    printf("\n The value of sum of i is float %d \n",sum);
    printf("\n The value of sub of i is float %d \n",sub);
    printf("\n The value of mul of i is float %d \n",mul);
    printf("\n The value of div of i is float %d \n",div);
    return 0;
}
