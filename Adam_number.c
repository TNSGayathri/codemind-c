#include<stdio.h>
int main()
{
    int n,sn,rn=0,rsn,r,t1=0;
    scanf("%d",&n);
    sn=n*n;
    while(n>0)
    {
        r=n%10;
        rn=rn*10+r;
        n=n/10;
    }
    rsn=rn*rn;
    while(rsn>0)
    {
        r=rsn%10;
        t1=t1*10+r;
        rsn=rsn/10;
    }
    if(sn==t1)
    printf("True");
    else
    printf("False");
}