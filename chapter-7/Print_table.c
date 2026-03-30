#include <stdio.h>
void PrintTable(int *Multable, int num, int n)
{
    printf("The mul table of %d is :\n", num);
    scanf("%d %d",&n,&num);
    for (int i = 0; i < n; i++)
    {
        Multable[i] = num * (i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d * %d  = %d\n", num, i + 1, Multable[i]);
    }

    printf("\n *****************************\n\n");
}
int main()
{
    int Multable[100][10];
    PrintTable(Multable[0], 2, 10);
    PrintTable(Multable[1], 3, 10);
    PrintTable(Multable[2], 4, 10);
    PrintTable(Multable[3], 5, 10);
    PrintTable(Multable[4], 6, 10);
    PrintTable(Multable[5], 7, 10);
    PrintTable(Multable[6], 8, 10);
    PrintTable(Multable[7], 9, 10);
    PrintTable(Multable[8], 10, 10);
   // PrintTable(Multable[9], 11, 10);
   //PrintTable(Multable[20], 22, 10);
   // PrintTable(Multable[21], 23, 10);
   // PrintTable(Multable[22], 24, 10);
   // PrintTable(Multable[23], 25, 10);
   // PrintTable(Multable[24], 26, 10);
   // PrintTable(Multable[25], 27, 10);
   // PrintTable(Multable[26], 28, 10);
   // PrintTable(Multable[27], 29, 10);
   // PrintTable(Multable[28], 30, 10);
   // PrintTable(Multable[29], 31, 10);
   // PrintTable(Multable[30], 32, 10);
   // PrintTable(Multable[31], 33, 10);
   // PrintTable(Multable[32], 34, 10);
   // PrintTable(Multable[33], 35, 10);
   // PrintTable(Multable[34], 36, 10);
   // PrintTable(Multable[35], 37, 10);
   // PrintTable(Multable[36], 38, 10);
   // PrintTable(Multable[37], 39, 10);
   // PrintTable(Multable[38], 40, 10);
   // PrintTable(Multable[39], 41, 10);
   // PrintTable(Multable[41], 42, 10);
   // PrintTable(Multable[42], 43, 10);
   // PrintTable(Multable[43], 44, 10);
   // //PrintTable(Multable[44], 45, 10);
   // PrintTable(Multable[45], 46, 10);
   // PrintTable(Multable[46], 47, 10);
   // PrintTable(Multable[47], 48, 10);
   // PrintTable(Multable[48], 49, 10);
   // PrintTable(Multable[49], 50, 10);
   // PrintTable(Multable[50], 51, 10);
   // PrintTable(Multable[51], 52, 10);
   // PrintTable(Multable[52], 53, 10);
   // PrintTable(Multable[53], 54, 10);
   // PrintTable(Multable[54], 55, 10);
   // PrintTable(Multable[55], 56, 10);
   // PrintTable(Multable[56], 57, 10);
   // PrintTable(Multable[57], 58, 10);
   // PrintTable(Multable[58], 59, 10);
   // PrintTable(Multable[59], 60, 10);
   // PrintTable(Multable[60], 61, 10);
   // PrintTable(Multable[61], 62, 10);
   // PrintTable(Multable[62], 63, 10);
   // PrintTable(Multable[63], 64, 10);
   // PrintTable(Multable[64], 65, 10);
   // PrintTable(Multable[65], 66, 10);
   // PrintTable(Multable[66], 67, 10);
   // PrintTable(Multable[67], 68, 10);
   // PrintTable(Multable[68], 69, 10);
   // PrintTable(Multable[69], 70, 10);
   // PrintTable(Multable[70], 71, 10);
   // PrintTable(Multable[71], 72, 10);
   // PrintTable(Multable[72], 73, 10);
   // PrintTable(Multable[73], 74, 10);
   // PrintTable(Multable[74], 75, 10);
   // PrintTable(Multable[75], 76, 10);
   // PrintTable(Multable[76], 77, 10);
   // PrintTable(Multable[77], 78, 10);
   // PrintTable(Multable[78], 79, 10);
   // PrintTable(Multable[79], 80, 10);
   // PrintTable(Multable[80], 81, 10);
   // PrintTable(Multable[81], 82, 10);
   // PrintTable(Multable[82], 83, 10);
   // PrintTable(Multable[83], 84, 10);
   // PrintTable(Multable[84], 85, 10);
   // PrintTable(Multable[85], 86, 10);
   // PrintTable(Multable[86], 87, 10);
   // PrintTable(Multable[87], 88, 10);
   // PrintTable(Multable[88], 89, 10);
   // PrintTable(Multable[89], 90, 10);
   // PrintTable(Multable[90], 91, 10);
   // PrintTable(Multable[91], 92, 10);
   // PrintTable(Multable[92], 93, 10);
   // PrintTable(Multable[93], 94, 10);
   // PrintTable(Multable[94], 95, 10);
   // PrintTable(Multable[95], 96, 10);
   // PrintTable(Multable[96], 97, 10);
   // PrintTable(Multable[97], 98, 10);
   // PrintTable(Multable[98], 99, 10);
   // PrintTable(Multable[99], 100, 10);

    return 0;
}
