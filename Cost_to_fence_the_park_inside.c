#include<stdio.h>
int main()
{
    int L,B,W,C,tc,a;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    if(L<=W+W || B<=W+W)
    {
        printf("Impossible");
    }
    else
    {
        a=L*B-((L-2*W)*(B-2*W));
        tc=a*C;
    
    printf("%d",tc);
}
}