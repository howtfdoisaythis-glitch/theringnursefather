//Write a program to input two numbers and display their sum.   
#include <stdio.h>
int main()              
            
{
    int a,b,sum;
    printf("enter two numbers\n");
    scanf("%d %d", &a ,&b);
    sum=a+b; // calculating sum of two numbers
    printf("the sum is %d",sum);
    return 0;
}       