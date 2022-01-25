#include<stdio.h>
int main()
{
	int n,r,i,j;
	scanf("%d%d",&n,&r);
	for(i=1;i<=r;i++)
	{
		if(i%2!=0)
	{
			j=n*i;
		printf("%d x %d = %d
",n,i,j);
	}
	}
}