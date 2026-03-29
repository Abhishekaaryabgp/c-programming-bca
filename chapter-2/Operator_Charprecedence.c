#include <stdio.h>
#include <conio.h>
int main()
{
    char a, b, c;
    printf("\n Sir enter the value for a and b ___");
    scanf("%c %c", &a, &b);
    c = a * b + a - b + a / b + a % b;
    printf("\n  Your answer is = %c ", c);
    return 0;
}
