#include<stdio.h>
int main()
{
	 int i,a[3],b[3],p=0,q=0;
	 for(i=0;i<3;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 for(i=0;i<3;i++)
	 {
	 	scanf("%d",&b[i]);
	 }
	 for(i=0;i<3;i++)
	 {
	 	if(a[i]>b[i])
	 	{
	 		p++;
		 }
		 else if(a[i]<b[i])
		 {
		 	q++;
		 }
	 }
	 printf("%d %d",p,q);
}