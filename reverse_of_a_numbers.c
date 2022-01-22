#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    while(n>=10)
    {
    if(n>=10)
    {
        r=n%10;
        printf("%d",r);
        
    }
    else
    {
        r=n;
        printf("%d",r);
    }
    n=n/10;
    }
    if(n<10)
    {
        r=n;
    }
    printf("%d",r);
}