#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Enything");
    scanf("%c",&ch);
    if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
    printf("Alphabet");
else if(ch>='0' && ch<='9')
printf("Digit");
else
printf("Special symbol");
return 0;
}