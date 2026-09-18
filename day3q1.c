//Write a program to convert temperature from Celsius to Fahrenheit
#include <stdio.h>
int main()
{
    float celcius,fahrenheit;
    printf("enter the temperture in degree celcius");
    scanf("%f", &celcius);
    fahrenheit= (celcius*9/5.0)+32;
    printf("the temperature in  degree celcius is %f\n", celcius);
     printf("the temperature in  degree fahrenheit is %f\n", fahrenheit);
     return 0;
}