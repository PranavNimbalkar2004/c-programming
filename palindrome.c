#include<stdio.h>
int main()
{
    int n, reversed=0,r,original;
    printf("Enter a No =");
    scanf("%d",&n);
    original = n;
    while(n !=0)
    {
        r=n%10;
        reversed=reversed*10+r;
        n/=10;
    }
    if(original==reversed)
    printf("%d is palindrome",original);
else
    printf("%d is not a palindrome",original);
return 0;
}