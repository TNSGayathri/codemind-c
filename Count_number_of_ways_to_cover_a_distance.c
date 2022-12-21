#include<stdio.h>
int main()
{
    int n,r=0,a=1,b=1,c=2,i;
    scanf("%d",&n);
    if(n<=2)
    {
        printf("%d",n);
    }
    else
    {
        for(i=3;i<=n;i++)
        {
            r=a+b+c;
            int temp=a;
            a=b;
            b=c;
            c=r;
        }
        printf("%d",r);
    }
}