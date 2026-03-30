#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float sallary;
    char name[20];
};
void show(struct employee emp)
{
    printf("The code of employee is : %d\n",emp.code);
    printf("The sallary of employee is : %f\n",emp.sallary);
    printf("The name of employee is : %s\n",emp.name);
}
int main()
{

    struct employee e1;
    struct employee *ptr;
    ptr = &e1;

    ptr->code = 3;
    ptr->sallary = 33.9;
    strcpy(ptr->name,"Aarya");
    show(e1);

    return 0;
}
