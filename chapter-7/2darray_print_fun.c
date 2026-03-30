#include <stdio.h>
int main()
{
    int fun = 2;
    int fun = 2;
    int [2][2];
    for (int i = 0; i < fun; i++)
    {
        for (int j = 0; j < fun; j++)
        {
            printf("FUNCTIONS is %d and %d\n",i+1,j+1);
            scanf("%d",&fun[i][j]); 
        }
        
    }
        for (int i = 0; i < fun; i++)
    {
        for (int j = 0; j < fun; j++)
        {
            printf("THE FUNCTON IS %d and %d",i+1,j+1,fun[i][j]); 
        }
        
    }
    
    return 0;
}
