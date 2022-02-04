#include<stdio.h>
int main()
{
    int n,r,ec=0,oc=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r%2==0)
        {
            ec++;
        }
        else{
            oc++;
        }
        n=n/10;
    }
    if(ec!=0 && oc==0)
    {
        printf("Even");
    }
    else if(oc!=0 && ec==0)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}