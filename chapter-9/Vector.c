#include <stdio.h>
struct vector
{
    int x;
    float y;
};
struct vector sumVector(struct vector v1,struct vector v2){
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
      
}
int main()
{
    struct vector v1,v2,sum;
    v1.x = 3;
    v1.y = 2;
    printf("X dimention is %d\n",v1.x);
    printf("Y dimention is %d\n",v1.y);

    v2.x = 5;
    v2.y = 6;
    printf("X dimention is %d\n",v2.x);
    printf("Y dimention is %d\n",v2.y);

    sum = sumVector(v1,v2);
    printf("X dimention of result is %d\n",sum.x);
    printf("Y dimention of result is %d\n",sum.y);
    return 0;
}