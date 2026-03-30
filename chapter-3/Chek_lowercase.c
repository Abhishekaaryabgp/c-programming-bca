#include <stdio.h>
#include <conio.h>
int main()
{
    char character;
    printf("\n Enter your character :");
    scanf("%c",&character);

    if (isalpha(character)>0)
    {
        printf("\n lower case chararter :");
    }
    else if (isalpha(character)<0)
    {
        printf("\n Upper case chararter :");
    }
     else
    {
        printf("\n numeric character :");
    }
    
    return 0;
}
