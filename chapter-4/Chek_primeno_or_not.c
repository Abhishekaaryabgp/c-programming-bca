#include <stdio.h>
int main()
{
    int n = 2, prime = 1;
    for (int i = 2; i < n; i++){
    
        if (n % 1 == 0)
         prime = 0;
         break;
        if (prime == 0)
        {
            printf("\n This is not a prime no...");
        }
        else
        {
            printf("\n This is prime no ...");
        }
    }

    return 0;
}
