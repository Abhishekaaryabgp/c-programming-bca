#include <stdio.h>
#include <string.h>
//Structure intooo.
struct employee // This is the structure in c language.
{
    int code;
    float sallary;
    char name[20];
};

int main()
{
    
    // e1.code = 3;
    // e1.sallary = 939.084;
    struct employee e1;
    printf("Enter the employee code :");
    scanf("%d", &e1.code);
    printf("Enter the employee sallary :");
    scanf("%3f", &e1.sallary);
    printf("Enter the employee name :");
    scanf("%s", &e1.name);

    //strcpy(e1.name, "ABHISHEK");
    printf("%d\n", e1.code);
    printf("%f\n", e1.sallary);
    printf("%s\n", e1.name);

    return 0;
}
