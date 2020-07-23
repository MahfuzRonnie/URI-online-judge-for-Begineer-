#include<stdio.h>
int main()
{
    int i,a,b,temp,s=0;
    scanf("%d %d",&a,&b);
    if(a>b){temp=a;a=b,b=temp;}
    for(i = a;i<=b;i++)
    {
        if(i%13!=0)s +=i;
    }
    printf("%d\n",s);
    return 0;
}
