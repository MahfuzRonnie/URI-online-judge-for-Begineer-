#include<stdio.h>
int main()
{
    int T,N[1000],i;
    scanf("%d",&T);
    for(i=0;i<1000;i++)
        N[i]=i%T;
    for(i=0;i<1000;i++)
        printf("N[%d] = %d\n",i,N[i]);
    return 0;
}
