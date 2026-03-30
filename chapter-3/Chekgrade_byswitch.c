#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks (0 -100): ");
    scanf("%d", marks);

    switch (marks / 10)
    {
    case 10:
    case 9:
        printf("\n A grade...");
        break;
    case 8:
        printf("\n B grade...");
        break;
    case 7:
        printf("\n C grade...");
        break;
    case 6:
        printf("\n D grade...");
        break;

    case 5:
        printf("\n E grade...");
        break;

    default:
        printf("\n grade F");
    }
    return 0;
}
