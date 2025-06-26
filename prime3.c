#include<stdio.h>
#include<math.h>
int main()
{
int n,i,flag;
printf("Enter a No =");
scanf("%d",&n);
flag=1;
for(i=2;i<=sqrt(n);i++)
{
    if(n%i==0)
    {
        flag=0;
        break;
    }
}
    if (flag==1)
     printf("NO is prime");
     else
     printf("No is not prime");
    
        
    
    

}