#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i=0,j=1,is_perfect=0;
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]); 
    }
    for(i=0;i<n;i++)
    { 
        for(j=1;j<=a[i];j++)
        { 
         if(a[i]!=j*j)
        {
            is_perfect=0;
        }
        else
        {
            is_perfect=1;
            break;
        }
}
        if(is_perfect==1)
        {
            printf("True
");
        }
    else
    {
        printf("False
");
    }
    
}
   }
    
