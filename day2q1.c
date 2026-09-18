//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main()
{
    int l,b,area,perimeter;
    printf("enter length and breadth of a traingle\n");
    scanf("%d %d", &l, &b);
    area=l*b;
    perimeter=2*(l+b);
    printf("the area of rectangle is%d\n", area);
     printf("th perimeter of rectangle is %d\n", perimeter);
     return 0;


}