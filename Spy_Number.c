#include<stdio.h>
int main()
{
    int n,r,pro=1,sum=0;
    scanf("%d",&n);
    while(n>=10)
    {
        r=n%10;
        n=n/10;
        pro=pro*r;
        sum=sum+r;
    }
    if(n<10)
    {
        r=n;
        pro=pro*r;
        sum=sum+r;
    }
    if(sum==pro)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}