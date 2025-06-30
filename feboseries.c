#include<stdio.h>
int main()
{
    int a=10,b=1,c,i,n;
    if(n==1)
    printf("%d",&n);
else
    if(n==1)
    printf("%d %d",a);
else 
    if(n>2)

        printf("%d %d",a,b);
        for(i=2;i<n;i++)
        {
            c=a+b;
            printf("%d",c);
            a=b;
            b=c;
        }
    return 0;
}