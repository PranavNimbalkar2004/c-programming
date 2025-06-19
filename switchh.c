#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("Enter Two Numbers:");
    scanf("%d%d",&a,&b);
    printf("1 Addition");
    printf("\n2 substraction");
    printf("\n3 Multiplication");
    printf("\n4 Division");
    printf("\nEnter Choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("Addition %d",(a+b));
          break;
        case 2:printf("Substraction %d",(a-b));
          break;
        case 3:printf("Multiplication %d",(a*b));
          break;
        case 4:printf("Division %d",(a/b));
          break;
        default:printf("Invalid");
        return 0;
    }
}