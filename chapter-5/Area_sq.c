#include <stdio.h>
#include <math.h>
int main()
{
    float slide; //You can also use int but you are using pow and if you are using pow so u need to using type casting//
    printf("\n Enter the value ...");
    scanf("%f",&slide);
    printf("The value of %f",pow(slide,2));

    return 0;
}
