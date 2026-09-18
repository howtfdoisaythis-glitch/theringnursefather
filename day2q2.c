//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main()
{
    int radius;
    float circumference,area;
    printf("enter the radius of the circle");
    scanf("%d", &radius);
    circumference= 2*3.14*radius;
    area=3.14*radius*radius;
    printf("the circumference of circle is %f\n", circumference);
    printf("the area of circle is %f\n", area);
    return 0;
}