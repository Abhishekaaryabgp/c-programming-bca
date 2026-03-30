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
    //printf("Enter the vector for x dimention :\n");
    //scanf("%d",&v1.x);

    //printf("Enter the vector for y dimention :\n");
    //scanf("%d",&v1.y);

    //printf("x dimention is %d :\n",v1.x);
    //printf("y dimention is %d :\n",v1.y);

    printf("Enter the vector 1 for x dimention :\n");
    scanf("%d",&v2.x);
    //printf("x dimention is %d :\n",v2.x);

    printf("Enter the vector 2 for y dimention :\n");
    scanf("%d",&v2.y);
    //printf("y dimention is %d :\n",v2.y);

    sum = sumVector(v1,v2);
    printf("X dimention of result is %d\n",sum.x);
    printf("Y dimention of result is %d\n",sum.y);
    return 0;
}
