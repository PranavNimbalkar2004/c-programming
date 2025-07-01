#include<stdio.h>
int main()
{
    int i,j,n,temp=0,a[100];
    printf("Enter a element size =");
    scanf("%d",&n);
    printf("Enter a Element =");
     for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
       for(j=0;j<n-1-i;j++)
       {
        if(a[j]>a[j+1])
        {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
       }
    } 
    printf(" sort array\n");
    for(i=0;i<n;i++)
    printf("\t%d",a[i]);

}