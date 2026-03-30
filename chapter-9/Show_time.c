#include <stdio.h>
typedef struct seconds
{
    int seconds;
    int minutes;
    int hours;
} seconds;
void display(seconds t)
{
    printf("Enter the Time :\n");
    scanf("%d %d %d",&t.seconds,&t.minutes,&t.hours);
    printf("Time is : %d:%d:%d...tik.tok...time remaining.\n", t.seconds,t.minutes,t.hours);
}

int main()
{
    seconds t = {};
    display(t);
    return 0;
}
