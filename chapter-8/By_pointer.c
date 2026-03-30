#include <stdio.h>
int main()
{
    // char *ptr = "abhishek aarya";
    char ptr[20];
    printf("Enter the name :");
    gets(ptr);
    // puts(ptr);
    printf("Your name is %s :", ptr);
    return 0;
}
