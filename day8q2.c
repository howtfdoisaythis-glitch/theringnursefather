//Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("ENTER VALUE OF THREE NUMBERS A B AND C\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b&&a>c)
    printf("A IS THE LARGEST AMONG THESE THREE NUMBERS");
     if(b>a&&b>c)
    printf("B IS THE LARGEST AMONG THESE THREE NUMBERS");
     if(c>b&&a<c)
    printf("C IS THE LARGEST AMONG THESE THREE NUMBERS");
    return 0;
}