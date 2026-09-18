//Write a program to check if a number is a strong number.
#include <stdio.h>
int main()
{
    int num,d,i,sum=0,fact;
    printf("ENTER THE NUMBER ");
    scanf("%d", &num);
    int m=num;
    while(num!=0)
    {
        d=num%10;
        fact=1;
        for(i=1;i<=d;i++)
        {
          fact=fact*i;
        }
        sum=sum+fact;
        num=num/10;
    }
    if(m==sum)
    printf("THIS NUMBER IS STRONG NUMBER");
    else
    printf("THIS NUMBER IS NOT A STRONG NUMBER ");
    return 0;
}