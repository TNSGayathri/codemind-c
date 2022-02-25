#include<stdio.h>
int main()
{
    int a,b,c,i=1,pow=1;
    scanf("%d%d%d",&a,&b,&c);
    for(i=1;i<=b;i++)
    {
        pow=pow*a;
    }
    printf("%d",pow%c);
}