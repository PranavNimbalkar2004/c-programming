#include<stdio.h>
int main()
{
    int sum=0,i,n,a[100];
    printf("Enter Element =");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    sum+=a[i];
    printf("sum of element %d",sum);
}