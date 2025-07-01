#include<stdio.h>
int main()
{
   int n,i,low=0,high,flag=0,a[100],mid,key;
   printf("Enter element size =");
   scanf("%d",&n);
   printf("Enter a Element =");
     for(i=0;i<n;i++)
   scanf("%d",&a[i]);
    
    printf("Enter key =");
    scanf("%d",&key);
    high=n-1;
        while(low<=high)
        {
            mid=low+high/2;
            if(a[mid]==key)
            {
                flag=1;
                break;
            }
            else if (a[mid]>key)
            high=mid-1;
        else
            low=mid+1;
        }
    
        if(flag==1)
        printf("Element was Found");
    else
        printf("Element was not Found");
}