#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("%sno",(n%2==0)?"no is even":"no is odd");
    return 0;
}