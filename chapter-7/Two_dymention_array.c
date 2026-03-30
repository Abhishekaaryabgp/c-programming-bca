#include <stdio.h>
int main()
{
    int n_students = 5;
    int n_subjects = 5;
    int marks[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Gentel men / Gentel lady enter students marks %d or subject %d\n",i+1,j+1);
            scanf("%d",&marks[i][j]); 
        }
        
    }
        for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Gentel men / Gentel lady The marks of your students %d in subject %d\n",i+1,j+1,marks[i][j]); 
        }
        
    }
    
    return 0;
}
