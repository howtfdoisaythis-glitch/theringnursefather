//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main()
{
    int i,n;
    float sum=1.0;
     printf("ENTER THE NUMBER OF TERMS OF SEREIS\n");
     scanf("%d", &n);
     for(i=2;i<=2*n-2;i=i+2)
     {
        sum=sum+((float)(i+1)/(float)(i+2));
     }
    
 printf("SUM OF SERIES IS  %f", sum);
}