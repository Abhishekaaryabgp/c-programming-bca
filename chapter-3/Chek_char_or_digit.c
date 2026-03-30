#include <stdio.h>
#include <conio.h>
int main()
{
    char characters;
    printf("\n Enter any key :  = ");
    scanf("%c", &characters);
    if (isalpha(characters) > 0)
    {
        printf("This is character letter :\n ");
    }
    else if (isdigit(characters) > 0)
    {
        printf("This is number digit : \n");
    }
    else
    {
        printf("This is not alphanumeric : \n");
    }

    return 0;
}
