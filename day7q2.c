//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
int main()
{
    char c;
    printf("enter a character");
    scanf("%c", &c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        printf("the character is a vowel");

    }
    else{
        printf("the character is not a vowel");
    }
    return 0;

}