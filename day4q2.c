//Write a program to find and display the sum of the first n natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter the number of terms of which sum you want\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("the sum of first n natural numbers\n");
    printf("%d", sum);
    return 0;
    

}