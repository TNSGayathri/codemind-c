#include<stdio.h>
int main()
{
    int n,r,pro=1,sum=0,sub;
    scanf("%d",&n);
    while(10<=n)
    {
   
    
        r=n%10;
    n=n/10;
    pro=pro*r;
    sum=sum+r;
}
if(n<10)
	{
	r=n;	pro=pro*r;
    sum=sum+r;	
	
}
    sub=pro-sum;
    printf("%d",sub);
}