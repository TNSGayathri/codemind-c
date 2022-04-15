#include<stdio.h>
int main()
{
    int n,t1=0,t2=1,nt=1,i;
    scanf("%d",&n);
    printf("%d %d ",t1,t2);
    for(i=3;i<=n;i++)
    {
        printf("%d ",nt);
        t1=t2;
        t2=nt;
        nt=t1+t2;
    }
}