#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter Enything");
    scanf("%c",&ch);
    if(isalpha(ch))
    printf("Alphabet");
else if(isdigit(ch))
    printf("Digit");
else
    printf("special symbol");
return 0;
}