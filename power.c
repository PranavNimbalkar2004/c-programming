#include<stdio.h>
int main()
{
    int x,y,result=1,i;
    printf("Enter a No =");
    scanf("%d",&x);
    printf("Enter a Power =");
    scanf("%d",&y);
    i=1;
    while(i<=y)
    {
        result=result*x;
        i++;
    }
    printf("\n%d %d=%d",x,y,result);
    }
