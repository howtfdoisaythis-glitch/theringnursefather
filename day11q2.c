//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main()
{
    float cp,sp,pp,lp;
    printf("ENTER THE VALUE OF THE COST PRICE AND SELLING PRICE\n");
    scanf("%f %f", &cp, &sp);
    float d= sp-cp;
    if(d<0)
    {
        printf("LOSS HAPPENED SO LOSS PERCENTAGE IS:  ");
        lp=((cp-sp)/cp)*100;
        printf("%f", lp);printf("%");
    }
    else{
        printf("PROFIT EARNED SO PROFIT PERCENTAGE IS");
        pp=((sp-cp)/cp)*100;
        printf("%f", pp);printf("%");

    }
    return 0;
}