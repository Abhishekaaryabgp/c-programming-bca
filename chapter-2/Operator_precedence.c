#include <stdio.h>
#include <conio.h>
int main()
{
    int x,y,z;
    printf("\n Enter the value for x and y...");
    scanf("%d %d",&x,&y);
    //these are the example of sequence instructions//
    z = (x*y+y-x)+(x*y-y+x);
    printf("\n The calculation of z is = %d",z);
    return 0;
}
