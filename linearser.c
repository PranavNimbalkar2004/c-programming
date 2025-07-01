#include<stdio.h>
int main()
{
    int a[100],flag=0,key,i,n;
    printf("Enter a Element size");
    scanf("%d",&n);
    printf("emter elementsm= ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter key");
    scanf("%d",&key);
    flag=0;
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            flag=1;
            break;

        }
    }
    if(flag==1)
    printf("Ele was found");
else
    printf("Ele was not found");
}