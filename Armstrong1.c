#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp,cnt=0,sum=0,r;
    float sum=0;
    printf("Enter a No =");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        cnt++;
        n=n/10;

    }
    n=temp;
    while(n>0)
    {
        r=n%10;
        sum=sum+pow(r,cnt);
        n=n/10;
    }
        if(sum==temp)
    
    printf("NO is Armstrong");
else
    printf("NO is Not Armstrong");

return 0;
}