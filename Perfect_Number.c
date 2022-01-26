#include<stdio.h>
int main()
{
    int n,i=1,f=0;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            f=f+i;
        }
    }
    if(f==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}