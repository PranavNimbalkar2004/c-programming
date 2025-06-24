#include<stdio.h>
int main()
{
    int n,fact=1,i;
    printf("Enter a No =");
    scanf("%d",&n);
    while(n>=2)
    {
        fact=fact*n;
        n--;
    }
    printf("factorai is %d",fact);
}