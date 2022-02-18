#include<stdio.h>
int main()
{
	char a[100];
	int i=0,j,t,len=0;
	scanf("%[^
]s",a);
	for(i=0;a[i]!=NULL;i++)
	{
		len++;
			}
j=len-1;
i=0;
	
	while(i<j)
	{
		t=a[j];
		a[j]=a[i];
		a[i]=t;
		i++;
		j--;
	}
		
		
	printf("%s",a);
}