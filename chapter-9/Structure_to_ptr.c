#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float sallary;
    char name[20];
};
int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
   // (*ptr).code = 3;
    ptr->code = 54;
    printf("%d\n", e1.code);
    return 0;
}