//Write a program to swap two numbers without using a third variable
#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the values of a and b\n");
    scanf("%d %d", &a, &b);
    printf("the values of a and b before swap\n");
    printf( "a=%d\n",a);
    printf("b=%d\n", b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the values of a and b before swap\n");
        printf( "a=%d\n",a);
         printf("b=%d\n", b);
return 0;


}