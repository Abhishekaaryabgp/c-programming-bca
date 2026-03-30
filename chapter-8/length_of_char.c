#include <stdio.h>
#include <string.h>
int main()
{
    char *st = "Abhishek aarya bgp";
    int a = strlen(st);//string length...
    while (*st!='\0')//looping...
    {
        printf("The length of string st is %d\n", a);
        st++;//incrementing...the strings
    }
    
  
    return 0;
}
