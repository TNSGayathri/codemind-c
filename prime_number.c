#include<stdio.h>
int main()
{
	int n,i=1,f=0;
	scanf("%d",&n);
	while(n>=i)
	{
		if(n%i==0)
		{
			f+=1;
		}
   i++;		
}
			if(f==2)
			{
				printf("prime");
			}
			else
			{
				printf("not a prime");
			}
		

}
