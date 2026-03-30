#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    printf("\n enter the character :");
    scanf("%c",&ch);

    if (ch<=122 && ch>=97)
    {
        printf("\n It is lower case :");
    }
    else if (ch<=90 && ch>=65)
    {
        printf("\n It is Upper case :");
    }
    else {
        printf("\n It is not lower case!  AND  Upper case! (It is numeric or alpha numeric ...)\n");
    }

    return 0;
}
