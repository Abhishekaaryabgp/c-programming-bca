#include <stdio.h>
int main()
{
    float v, f, u ,lens;
    printf("\n Enter  the value for \n v \n f \n u...");
    scanf("%d %d %d",&v,&f,&u);
    lens = (1/v - 1/f);
    printf("\n The out put is %f",lens);

   // lensformula = (1 / v - 1 / u);
    //printf("\n This is your answer %d ",lensformula);
    
    return 0;
}
