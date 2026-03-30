#include <stdio.h>
#include <conio.h>
int main()
{
    int grade;
    printf("\n Input your marks ...");
    scanf("%d", &grade);
    if (grade > 90)
    {
        printf("A++ grade\n");
    }
    else if (grade > 80)
    {
        printf("A grade\n");
    }
    else if (grade > 70)
    {
        printf("B grade\n");
    }
    else if (grade > 60)
    {
        printf("C grade\n");
    }
    else if (grade > 50)
    {
        printf("D grade\n");
    }
     else
    {
        printf("Fail\n");
    }
    return 0;
}
