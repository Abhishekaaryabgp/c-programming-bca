#include <stdio.h>
typedef struct date
{
    int date;
    int month;
    int year;
} date;
void display(date d)
{
    printf("Enter the date :\n");
    scanf("%d %d %d",&d.date,&d.month,&d.year);
    printf("Today is : %d/%d/%d\n", d.date,d.month,d.year);
}

int main()
{
    date d = {11, 17, 21};
    display(d);
    return 0;
}
