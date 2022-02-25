#include<stdio.h>
int main()
{
    int a,n,r,rev=0;
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(a==rev)
    {
        printf("True");
    }
   else
   {
       printf("False");
   }
}