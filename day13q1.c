//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main()
{
    int a,b,choice;
    printf("ENTER TWO NUMBERS\n ");
    scanf("%d %d", &a, &b);
    printf("ENTER 1 FOR ADDITION\n ");
    printf("ENTER 2 FOR SUBTRACTION\n ");
    printf("ENTER 3 FOR MULTIPLICATON\n ");
    printf("ENTER 4 FOR DIVISION\n ");
    printf("ENTER 5 FOR MODULUS\n ");

    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
        int sum=a+b;
        printf("ADDITION IS  %d", sum);
        break;
        case 2:
        int diff=a-b;
        printf("SUBTRACTION IS  %d", diff);
        break;
        case 3:
        int mult=a*b;
        printf("MULTIPLICATION IS  %d", mult);
        break;
        case 4:
        float div=(float)a/(float)b;
        printf("DIVISION IS  %f", div);
        break;
        case 5:
        int rem=a%b;
        printf("REMAINDER IS  %d", rem);
        break;
        default:
        printf("INVALID INPUT!!");



    }
    return 0;
}