/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/
#include <stdio.h>
int main()
{
    int day;
    printf("ENTER NUMBER OF DAYS STUDENT BEING LATE\n");
    scanf("%d", &day);
    int fine;
    if(day>=1 && day<=5)
    {
     fine=2*day;
    }
    else if(day>=6&&day<=10)
    {
        fine=(2*5)+(4*(day-5));

    }
    else if(day>=11&&day<=30)
    {
        fine=(2*5)+(4*5)+(6*(day-10));
    }
    else{
        printf("MEMBERSHIP CANCELLED!!");
        return 0;
    }
    printf("FINE IS  %d",fine);
return 0;
}