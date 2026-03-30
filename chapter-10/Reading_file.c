#include <stdio.h>
int main()
{
    FILE *ptr;
    float num;
    int num2;
    ptr = fopen("aarya.txt", "r");
    if (ptr == NULL)
    {
        printf("File does not exists! :Sorry:\n");
    }
    else
    {
        fscanf(ptr, "%f", &num);
        printf("The folat value is %f\n", num);
        fscanf(ptr, "%d", &num2);
        printf("The integer value is %d\n", num2);
        printf("Your file exist :\n");
    }
    return 0;
}
