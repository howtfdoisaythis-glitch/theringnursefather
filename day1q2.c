//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main()
{
    int a,b,sum,diff,product,quotient;
    printf("enter two numbers\n");
    scanf("%d %d", &a, &b);
    sum=a+b;
    diff=a-b;
    product=a*b;
    quotient=a/b;
    printf("the sum of the numbers %d\n", sum);
    printf("the difference of the numbers %d\n", diff);
    printf("the product of the numbers %d\n", product);
printf("the division of the numbers %d\n", quotient);

return 0;

}