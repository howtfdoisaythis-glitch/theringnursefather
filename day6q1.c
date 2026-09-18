//write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
int main()
{
    int num;
    printf("enter a number\n");
    scanf("%d", &num);
    if(num%2==0) //even number is divisible by 2 and remainder is 0, odd number is not divisible by 2 and remainder is 1
    {
        printf("the number is even");
    }
    else
{
    printf("the number is odd");

}
return 0;
}