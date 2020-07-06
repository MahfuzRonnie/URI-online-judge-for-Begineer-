#include<stdio.h>
int main()
{
    char name[30];
    float sa;
    double se, TOTAL;
    gets(name);
    scanf("%f %lf",&sa,&se);
    TOTAL = sa + (se*15)/100;
    printf("TOTAL = R$ %0.2lf\n",TOTAL);
    return 0;
}
