//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main()
{
    int time,hr,min,sec;
    printf("enter time in seconds");
    scanf("%d", &time);
    hr=time/(60*60);
    min=((time/60)-(hr*60));
    sec=time-((hr*60*60)+(min*60));
    printf("time is %d", hr);printf(":%d",min);printf(":%d",sec);    
    return 0;
}