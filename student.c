#include<stdio.h>
int main()
{
    int roll;
    char sub1[100],sub2[100],sub3[100],name[100];
    float m1,m2,m3,total,avg;
    char grade;
    printf("Enter student details \n");
    printf("Roll NO:");
    scanf("%d",&roll);
    printf("Name:");
    scanf("%s",&name);
    printf("Subject 1:");
    scanf("%s",&sub1);
    printf("Subject 2:");
    scanf("%s",&sub2);
    printf("Subject 3:");
    scanf("%s",&sub3);
    printf("enter marks1:");
    scanf("%f",m1);
    printf("enter marks2:");
    scanf("%f",m2);
    printf("enter marks3:");
    scanf("%f",m3);

    total=m1+m2+m3;
    avg=total/3;
    if(avg<=100 && avg>=90)
    grade='A';
    else if(avg<90 && avg>=80)
    grade='B';
    else if(avg<80 && avg>=70)
    grade='C';
    else if(avg<70 && avg>=60)
    grade='D';
    else if(avg<60 && avg>=50)
    grade='e';
    else
    grade='F';
    
    printf("\n Name of Student");
    printf("\n Roll NO=%d",roll);
    printf("\n Name of subject1=%s",sub1);
    printf("\n marks of Subject1=%.2f",m1);
    printf("\n Name of subject2=%s",sub2);
    printf("\n marks of subject2=%.2f",m2);
    printf("\n name of subject3=%s",sub3);
    printf("\n marks of subject3=%.2f",m3);
    printf("\n total marks=%.2f",total);
    printf("\n avg marks=%.2f",avg);
    return 0;







}