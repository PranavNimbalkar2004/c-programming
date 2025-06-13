#include<stdio.h>
int main()
{
    int  i,n,sum=0;
    printf("Enter any No:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum +=i;
    
    }
    printf("sum of no from 1ton:%d\n",sum);
    return 0;
    
}