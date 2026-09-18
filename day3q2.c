//Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main()
{
    int a,b,c=0;
    printf("enter the values of a and b\n");
    scanf("%d %d", &a, &b);
    printf("the values of a and b before swap\n");
    printf( "a=%d\n",a);
    printf("b=%d\n", b);
    c=a;
    a=b;
    b=c;
    printf("the values of a and b before swap\n");
        printf( "a=%d\n",a);
         printf("b=%d\n", b);
return 0;


}