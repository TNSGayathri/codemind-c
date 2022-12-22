#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,r,f=0;
    scanf("%d",&n);
    d=int(log10(n));
    while(n)
    {
      r=n/int(pow(10,d));
      if(r==6 && f==0)
      {
        r=9;
        f=1;
      }
      printf("%d",r);
      n=n%int(pow(10,d));
      d-=1;
    }
}