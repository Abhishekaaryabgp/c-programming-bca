#include <stdio.h>
int main()
{
    int age;
    printf(" Sir / Mam enter your age ...");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("\n You can drive but first you should have the driving licence for drive...");
    }

    else
    {
        printf("\n Sorry your age is under 18 you are not able to drive...");
    }
  
   

    return 0;
}