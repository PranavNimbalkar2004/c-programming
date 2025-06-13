#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter 3 no");
    scanf("%d%d%d",&a,&b,&c);
    b=(a>b)?a:b;
    b=(c>b)?c:b;
    printf("Max is%2f",fmax(a,fmax(b,c)));
    return 0;
}