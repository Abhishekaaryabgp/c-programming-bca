#include <stdio.h>
int main()
{
    int arr[10];     // array storing the ten elements//
    int *ptr = arr; // the pointer pointes the array of first element //
    ptr = ptr + 2;  // Here pointer pointing to the third elements //
    if (ptr == &arr[2])
    {
        printf("\n These points the same location in the memory :\n");
    }
    else
    {
        printf("\n These do not points the same location in the memory !\n");
    }

    return 0;
}
