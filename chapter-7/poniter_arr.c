#include <stdio.h>
#include <conio.h>
int main()
{
    // so this program will print your machines address//
    // in my ide the interger i storing 4 bytes//
    // in my ide the float storing 4 bytes//
    // in my ide the character  storing 1 bytes//
    // in my ide the double  storing 8 bytes//
    // in my ide the long double storing 12 bytes//

    // int i = 3.5;
    // int *ptr = &i;
    // printf("The value of pointer is %u\n", ptr);
    // ptr = ptr+1;
    // printf("The value of pointer is %u\n", ptr);
    // ptr++;
    // printf("The value of pointer is %u\n", ptr);

    // float i = 3.5;
    // float *ptr = &i;
    // printf("The value of pointer is %u\n", ptr);
    // ptr = ptr + 1;
    // printf("The value of pointer is %u\n", ptr);
    // ptr++;

    //char i = 'A';
    //char *ptr = &i;
    //printf("The value of pointer is %u\n", ptr);
    //ptr = ptr + 1;
    //printf("The value of pointer is %u\n", ptr);
    //ptr++;


    //double i = 3.5;
    //double *ptr = &i;
    //printf("The value of pointer is %u\n", ptr);
    //ptr = ptr + 1;
    //printf("The value of pointer is %u\n", ptr);
    //ptr++;
    long double i = 3.5;
    long double *ptr = &i;
    printf("The value of pointer is %u\n", ptr);
    ptr = ptr + 1;
    printf("The value of pointer is %u\n", ptr);
    ptr++;
    return 0;
}
