#include<stdio.h>
int main()
{
    float  salary,DA,hra,tax,bs;
    printf("enter salary");
    scanf("%d",&salary);
     printf("enter DA");
    scanf("%d",&DA); 
    printf("enter tax");
    scanf("%d",&tax);
     printf("enter bs");
    scanf("%d",&bs);
    salary=bs+((bs*(hra+DA-tax))/100);
    printf("salary = %.2f",salary);
    return 0;
    
}