#include<stdio.h>
int main()
{
    float bs, totalsalary, da, hra, tax;
    int eid;
    char ename[100];
    FILE *fp;
    fp = fopen("salarySlip.txt","w");
    printf("Enter Employee Details :");
    printf("\nID :");
    scanf("%d",&eid);
    printf("Name :");
    scanf("\n%d",&ename);
    printf("Basic Salary :");
    scanf("\n%d",&bs);
    printf("DA (%%) :");
    scanf("\n%f",&da);
    printf("HRA (%%) :");
    scanf("\n%f",&hra);
    printf("TAX (%%) :");
    scanf("\n%f",&tax);
    totalsalary = bs + ((bs * (da+hra-tax))/100);
    fprintf(fp,"\n----------------------Employee Salary Slip----------------------");
    fprintf(fp,"\n\t\tID              : %d",eid);
    fprintf(fp,"\n\t\tNmae             : %s",ename);
    fprintf(fp,"\n\t\tBasic Salary              : %d",bs);
    fprintf(fp,"\n\t\tDA(%%)            : %.2f",da);
    fprintf(fp,"\n\t\tHRA(%%)           : %.2f",hra);
    fprintf(fp,"\n\t\tTAX(%%)          : %.2f",tax);
    fprintf(fp,"\n\t\tTotal Salary          : %.2f",totalsalary);
   
    return 0;
    
}