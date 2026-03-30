#include <stdio.h>
int main()
{
    //|| This or down below char string is same||here the string will alredy stored null charcters...here the strings add nul 0 automatically 
    // but up string is more useful than down below 
    //char str[] = {'a','b','h','i','s','h','e','k','a','a','r','y','a' ,'\0'};// in here you will need to store null 0;
    char str[] = "Abhishek aarya :";
    char *ptr = str;
    while (*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    
    
    return 0;
}
