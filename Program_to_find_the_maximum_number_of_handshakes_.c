#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=n;n>0;n--)
    {
        c=c+(n-1);
    }
    printf("%d",c);
}