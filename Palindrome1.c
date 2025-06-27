#include<stdio.h>
int main()
{
    int n,rev=0,temp,rem;
    printf("Enter a No =");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==temp)
    printf("NO is palindrome");
else
printf("No is not palindrome");
}