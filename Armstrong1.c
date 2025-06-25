#include<stdio.h>
int main()
{
    int n,sum=0,r,temp;
    printf("Enter a No =");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;

    }
    if(temp==sum)
    printf("NO is Armstrong");
else
    printf("NO is Not Armstrong");

return 0;
}