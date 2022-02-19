#include<stdio.h>
int main()
{
    int i,r,k,c=0;
    scanf("%d%d%d",&i,&r,&k);
    while(i<=r)
    {
        if(i%k==0)
        {
            c++;
        }
        i++;
    }
    printf("%d",c);
}