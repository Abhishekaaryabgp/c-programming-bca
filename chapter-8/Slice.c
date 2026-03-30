#include <stdio.h>
#include <string.h>
void slice(char *st,int m,int n){
    int i = 0;
    while (i<n)
    {
        st[i] = st[i+m];
        i++;
    }
    st[i] = '\0';
}
//This is slice programme.//in strings
int main()
{
    char st[]= "Abhishek";
    slice(st , 0 ,5);
    printf("%s",st);
    return 0;
} 
