#include<stdio.h>
#include<string.h>
int main()
{
    char num[100];
    printf("Enter a No =");
    scanf("%s",&num);
    strrev(num);
    printf("Reverse no  %s",num);
    return 0;
}