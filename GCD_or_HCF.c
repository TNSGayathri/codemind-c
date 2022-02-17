#include<stdio.h>
int main()
{
    int n,n1,n2,gcd,i;
    scanf("%d%d",&n1,&n2);
    for(i=1;i<=n;i++)
    {
        if(n1%i==0 && n2%i==0)
        gcd=i;
    }
    printf("%d",gcd);
}