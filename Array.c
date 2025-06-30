#include<stdio.h>
int main()
{
    int a[100],n,i;
    printf("How many element you wants to enter = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
printf("\n Given data =");
 for(i=0;i<n;i++)
 printf("%d",a[i]);
}