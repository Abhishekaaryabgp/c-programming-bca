#include <stdio.h>
int main()
{
   int mul [10],i,n;
   printf("Enter the value for output the table :\n");
   scanf("%d",&n);
   for ( i = 0; i < 10; i++)
   {
       mul[i] = n*(i+1);
   }
   for ( i = 0; i < 10; i++)
   {
       printf("  //%d// =|| %d ||\n",i,mul[i]);
   }
   

    return 0;
}
