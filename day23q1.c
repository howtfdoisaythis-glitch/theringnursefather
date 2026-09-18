//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main()
{
    int i,n;
    float sum=0.0;
    int j=3;
    printf("ENTER THE NUMBER OF TERMS");
    scanf("%d", &n);
for(i=1;i<=n;i++)
{
    sum=sum+((float)(2*i))/((float)j);
    j=j+4;
}
printf("THE SUM OF THE SERIES IS %f", sum);
return 0;

}