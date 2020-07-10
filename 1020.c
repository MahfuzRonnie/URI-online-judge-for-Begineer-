#include<stdio.h>
int main()
{
    int N,y=0,m=0,d=0;
    scanf("%d",&N);
    y=N/365;
    N=N%365;
    m=N/30;
    d=N%30;
    printf("%d ano(s)\n",y);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);
    return 0;
}
