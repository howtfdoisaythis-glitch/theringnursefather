//Write a program to check if a number is a perfect number.
#include <stdio.h>
int main()
{
 int n,i,sum=0;
 printf("ENTER THE NUMBER\n");
    scanf("%d", &n);
 for(i=1;i<n;i++)
 {
    if(n%i==0)
    sum=sum+i;
 }
 if(sum==n)
 printf("PERFECT NUMBER");
 else
 printf("NOT  A PERFECT NUMBER");
 return 0;
}