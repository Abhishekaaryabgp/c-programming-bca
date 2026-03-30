#include <stdio.h>
int main()
{
    FILE *ptr;
    int name;
    float sallary = 348.2;
    printf("enter your name :\n");
    scanf("%d", &name);
    ptr = fopen("create,txt", "w");
    
    fprintf(ptr,"The sallary is %f",sallary);

    return 0;
}
