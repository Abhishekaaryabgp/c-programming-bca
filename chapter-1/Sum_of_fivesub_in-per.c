#include <stdio.h>
int main()
{
    int s1, s2, s3, s4, s5, sum, total = 500;
    float per;
    printf("Enter the num of subjects...\n");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
    sum = s1 + s2 + s3 + s4 + s5;
    printf("\n total no of sum is %d", sum);
    per = (sum * 100) / total;
    printf("\n percentage = %f", per);

    return 0;
}
