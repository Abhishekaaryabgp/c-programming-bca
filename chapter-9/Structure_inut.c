#include <stdio.h>
#include <string.h>
// . Dot operator is also called member operator 
struct employee // This is the structure in c language.
{
    int code;
    float sallary;
    char name[20];
};

int main()
{
    
    struct employee e1,e2,e3;
    printf("Enter the employee 01 code :");
    scanf("%d", &e1.code);
    printf("Enter the employee 01 sallary :");
    scanf("%3f", &e1.sallary);
    printf("Enter the employee 01 name :");
    scanf("%s", &e1.name);

    printf("%d\n", e1.code);
    printf("%f\n", e1.sallary);
    printf("%s\n", e1.name);

    printf("Enter the employee 02 code :");
    scanf("%d", &e2.code);
    printf("Enter the employee 02 sallary :");
    scanf("%3f", &e2.sallary);
    printf("Enter the employee 02 name :");
    scanf("%s", &e2.name);

    printf("%d\n", e2.code);
    printf("%f\n", e2.sallary);
    printf("%s\n", e2.name);

    printf("Enter the employee 03 code :");
    scanf("%d", &e3.code);
    printf("Enter the employee 03 sallary :");
    scanf("%3f", &e3.sallary);
    printf("Enter the employee 03 name :");
    scanf("%s", &e3.name);

    printf("%d\n", e3.code);
    printf("%f\n", e3.sallary);
    printf("%s\n", e3.name);



    return 0;
}
