#include<stdio.h>
int main()
{
    int x,y,i;
    printf("Enter starting no:x");
    scanf("%d",&x);
    printf("Enter ending no:y");
    scanf("%d",&y);
    for(i=x;i<=y;i++)
    {
    printf("%d",i);
    printf("\n");
    }
    return 0;
    
}