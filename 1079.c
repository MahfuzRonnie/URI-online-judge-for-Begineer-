#include<stdio.h>
int main()
{
    int i,n;
    float a,b,c,total;
    scanf("%d",&n);
    for(i = 0;i<n;i++)
    {
        scanf("%f %f %f",&a,&b,&c);
        total=a*2.0+b*3.0+c*5.0;
        printf("%.1f\n",total/10.0);
    }
    return 0;
}
