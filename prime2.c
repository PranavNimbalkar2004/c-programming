#include<stdio.h>
int main()
{
    int i,n,cnt=0;
    printf("Enter a No =");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
     {
        if(n%i==0)
        cnt++;

     }
     if(cnt==0)
     printf("no is prime");
     else
     printf("no is not prime");
}