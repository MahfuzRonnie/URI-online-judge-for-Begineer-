#include<stdio.h>
int main()
{
    int c1,c2,u1,u2;
    float p1,p2,TOTAL;
    scanf("%d %d %f",&c1,&u1,&p1);
    scanf("%d %d %f",&c2,&u2,&p2);
    TOTAL = (u1*p1)+(u2*p2);
    printf("VALOR A PAGAR: R$ %0.2lf\n",TOTAL);
    return 0;
}
