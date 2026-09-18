//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main()
{
    float p,t,r,si,ci;
    printf("enter the principal rate and time\n");
    scanf("%f %f %f", &p, &r, &t);
    si=(p*r*t)/100.0;
    ci=p*pow(1+r/100,t)-p;
    printf("the simpe interest of given details is %f\n", si);
    printf("the compound interest of given details %f\n", ci);
    return 0;
}