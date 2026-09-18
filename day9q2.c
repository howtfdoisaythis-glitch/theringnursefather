/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/
#include <stdio.h>
int main()
{
    float per;
    printf("ENTER THE PERCENTAGE OF THE STUDENT\n");
    scanf("%f", &per);
    if(per>=90.0&&per<=100.0)
    printf("GRADE A");
    else if(per>=80.0&&per<90.0)
    printf("GRADE B");
    else if(per>=70.0&&per<80.0)
    printf("GRADE C");
    else if(per>=60.0&&per<70.0)
    printf("GRADE D");
    else if(per>=0.0&&per<60.0)
    printf("GRADE F");
    else
    printf("INVALID INPUT !!");
    return 0;
}