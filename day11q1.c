//Write a program to display the month name and number of days using switch-case for a given month number.
#include <stdio.h>
int main()
{
    int choice;
    printf("ENTER THE NUMBER\n ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
        printf("JANUARY \n DAYS=31");
        break;
        case 2:
        printf("FEBRUARY \n DAYS=28");
        break;
        case 3:
        printf("MARCH \n DAYS=31");
        break;
        case 4:
        printf("APRIL \n DAYS=30");
        break;
        case 5:
        printf("MAY \n DAYS=31");
        break;
        case 6:
        printf("JUNE \n DAYS=30");
        break;
        case 7:
        printf("JULY \n DAYS=31");
        break;
        case 8:
        printf("AUGUST \n DAYS=31");
        break;
        case 9:
        printf("SEPTEMBER \n DAYS=30");
        break;
        case 10:
        printf("OCTOBER \n DAYS=31");
        break;
        case 11:
        printf("NOVEMBER \n DAYS=30");
        break;
        case 12:
        printf("DECEMBER \n DAYS=31");
        break;
        
        default:
        printf("INVALID INPUT!!");



    }
    return 0;
}