//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main()
{
    int l1,l2,l3;
    printf("ENTER THREE SIDES OF A TRIANGLE\n");
    scanf("%d %d %d", &l1, &l2, &l3);
    if(l1==l2&&l2==l3)
    printf("IT IS A EQUILATERAL TRIANGLE");
    else if(l1==l2 || l2==l3 || l1==l3)
    printf("IT IS A ISOSCELES TRIANGLE");
    else
    printf("IT IS A SCALENE TRAINGLE");
    return 0;
}