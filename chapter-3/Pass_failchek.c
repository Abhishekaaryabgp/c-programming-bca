#include <stdio.h>
int main()
{
    int physics, chemistry, maths;
    float total;
    printf("\n Input physics`s score :");
    scanf("%d", &physics);

    printf("\n Input chemistry`s score :");
    scanf("%d", &chemistry);

    printf("\n input math`s score :");
    scanf("%d", &maths);

    total = (physics + chemistry + maths) / 3;
    if ((total < 40) || physics < 33 || chemistry < 33 || maths < 33){
        printf("Your percentage is %f and you are fail \n", total);
}
else{
    printf("Your  total  percentge is %f and you are pass congratulation", total);
}

return 0;
}
