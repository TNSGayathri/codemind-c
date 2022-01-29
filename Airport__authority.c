#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],T,i,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&T);
     for(i=0;i<n;i++)
     {
         if(arr[i]<=T)
         { c++;
         }
        else
         {
		  c=c+2;
         }
     }
     printf("%d",c);
}