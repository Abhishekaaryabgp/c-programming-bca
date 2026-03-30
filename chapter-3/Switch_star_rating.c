#include <stdio.h>
#include <conio.h>
int main()
{
    int rating;
    printf("\n Enter your rating..beetween (1 to 5)...");
    scanf("%d", &rating);

    switch (rating)
    {
    case 1:
        printf("Your rating is 1 star (sorry for your problem)\n");
        break;
    case 2:
        printf("Your rating is 2 star (we will try to our best)\n");

    case 3:
        printf("Your rating is 3 star (thank you for your rating we will more try to best serve...\n");
        break;
    case 4:
        printf("Your rating is 4 star (thank you for 4 star if any problem so give us your feedback)\n");
        break;
    case 5:
        printf("\n Your rating is 5 star (Very very thank you sir we enjoyed you to served thank you so much for visit. hope you will came back .\n");
        break;
    case 6:
        printf(" Invalid !\n");
        break;
    }

        return 0;
    }
