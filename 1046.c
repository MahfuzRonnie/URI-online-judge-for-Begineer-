#include<stdio.h>
int main()
{
    int a,b,x,y;
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        x=a-b;
        y=24-x;
    }
    else if(b>a)
    {
        y=b-a;
    }
    else
    {
        y=24;
    }
    printf("O JOGO DUROU %d HORA(S)",y);

    return 0;
}
