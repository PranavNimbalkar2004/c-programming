#include<stdio.h>
int main()
{
    int n,i,cnt=0;
    printf("Enter a No=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        cnt++;
    
    }
    if(cnt==2)
    printf("No is Prime");
else
    printf("No is not Prime");

}