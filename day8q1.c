//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include<stdio.h>
int main()
{
    char c;
  
    printf("ENTER A CHARACTER\n");
    scanf("%c", &c);
      int a=c;
    if(a>=65&&a<=90)
    {
    printf("IT IS AN UPPERCASE ALPHABET");
    }
    else if(a>=97&&a<=122)
{    
        printf("IT IS AN LOWERCASE ALPHABET");
}
 
else if(a>=48&&a<=57)
{
        printf("IT IS AN DIGIT");
}
        else
        {
    printf("IT IS AN SPECIAL CHRARCTER");
        }
    return 0;
}