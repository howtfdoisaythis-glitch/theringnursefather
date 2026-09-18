/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/
#include <stdio.h>
int main()
{
    int unit;
    printf("ENTER THE NUMBER OF UNITS CONSUMED\n");
    scanf("%d", &unit);
    int bill;
    if(unit>=1 && unit<=100)
    {
     bill=5*unit;
    }
    else if(unit>=101&&unit<=200)
    {
        bill=(100*5)+(7*(unit-100));

    }
    else if(unit>=201&&unit<=300)
    {
        bill=(100*5)+(100*7)+(10*(unit-200));
    }
    else{
        bill=(100*5)+(100*7)+(10*100)+(12*(unit-300));
    }
    printf("BILL IS  %d",bill);
return 0;
}