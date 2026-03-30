#include <stdio.h>
#include <conio.h>
void Goodmorning();
void Goodafternoon();
void Goodnight();
int main()
{
    Goodmorning();
    return 0;
}
    void Goodmorning()
    {
        printf(" Good morning Abhi :\n");
        Goodafternoon();//this is indirectly called by function//
    }
    void Goodafternoon()
    {
        printf(" Good afternoon Abhi :\n");
        Goodnight();//this is indirectly called by function//
    }
    void Goodnight()
    {
        printf(" Good night Abhi :\n");
    }
