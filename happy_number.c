#include<stdio.h>
int main()
{
    int n,d,r=0;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        r=r+d*d;
        n=n/10;
        if(n==0 &&r>9)
        {
            n=r;
            r=0;
        }
    }
        if(r==1)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    
}