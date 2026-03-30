#include <stdio.h>
#include <conio.h>
float celltofun();
int main()
{
    float cel,celcius, fahrenheit;
    printf("Enter the temprature value in celcius \n");
    scanf("%f", &celcius);
    fahrenheit = celltofun(celcius);
    printf("\n Equvalent temprature in (fahrenheit)/0.2f", fahrenheit);
    return 0;
}
