#include <stdio.h>
int main()
{
    int length, breadth,area;
    printf("\n Enter the value for length...");
    scanf("%d", &length);

    printf("\n Enter the value for breadth...");
    scanf("%d", &breadth);
    area = length * breadth;
    printf("\n The area of rectangle is %d", area);
    return 0;
}
