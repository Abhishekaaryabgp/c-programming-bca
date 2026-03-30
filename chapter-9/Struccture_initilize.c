#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float sallary;
    char name[21];
};
int main()
{
    struct employee e1 = {3, 233.3, "aarya"};
    printf("%d\n", e1.code);
    printf("%2f\n", e1.sallary);
    printf("%s\n", e1.name);
    return 0;
}