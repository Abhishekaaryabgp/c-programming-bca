#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("putUdemo.jpg","w");
    fclose(ptr);
    return 0;
}
