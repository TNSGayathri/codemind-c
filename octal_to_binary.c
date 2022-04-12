#include<stdio.h>
#include<math.h>
int main()
{
        long long int num,d=0,r=0,p=0;
        long long int bin=0;
        scanf("%lld",&num);
        while(num)
        {
            r=num%10;
            d=d+r*(pow(8,p));
            num=num/10;
            p++;
        }
        p=1;
        r=0;
        while(d)
        {
            r=d%2;
            bin=bin+(r*p);
            d=d/2;
            p=p*10;
        }
        printf("%lld",bin);
    }
