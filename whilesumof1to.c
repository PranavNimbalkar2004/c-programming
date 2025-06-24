#include<stdio.h>
int main()
{
    int i,s=0,n;
    printf("\nEnter a No =");
    scanf("%d",&n);
    i=1;
    while(i<n)
    {
        s+=i;
        i++;
    }
    printf("sum is %d",s);
}