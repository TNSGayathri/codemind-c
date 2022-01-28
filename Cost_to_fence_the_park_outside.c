#include<stdio.h>
int main()
{
    int L,B,W,C,tc,a;
    scanf("%d%d%d%d",&L,&B,&W,&C);
a=((L+2*W)*(B+2*W))-L*B;
tc=C*a;
printf("%d",tc);
}