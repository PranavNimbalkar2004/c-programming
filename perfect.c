#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("Enter a No =");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        sum+=i;

    }
    if(sum==n)
    printf("No is Perfect");
else
    printf("No is Not Perfect");
return 0;
}