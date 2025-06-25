#include<stdio.h>
int main()
{
    int cnt=0,n;
    printf("Enter a No =");
    scanf("%d",&n);
    while(n>0)
    {
        cnt++;
        n=n/10;

    }
    printf("\n no of digit in given no id %d",cnt);
}