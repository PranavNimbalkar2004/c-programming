#include<stdio.h>
int main()
{
    int n,fact=1,i;
    printf("Enter a No =");
    scanf("%d",&n);
    i=2;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("factoral is %d",fact);
}