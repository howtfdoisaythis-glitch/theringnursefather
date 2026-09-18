//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number of your choice\n");
    scanf("%d", &num);
    if(num>0)
    {
        printf("the number is positive");

    }
    else if(num<0)
    {
printf("the number is negative");
    }
    else{
        printf("the number is zero");

    }
    return 0;
}