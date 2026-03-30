#include <stdio.h>
void printArray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("\n The value of element %d is %d\n", i + 1, ptr[i]);
}

int main()
{
    int arr[] = {344, 24, 36, 4, 5, 6};
    printArray(arr, 6);
    printf("%d", arr[2]);
    return 0;
}
