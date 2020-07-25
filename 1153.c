#include<stdio.h>
int main()
{
    int n,s,i;
    s=1;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        s=s*i;
    }
    printf("%d\n",s);
    return 0;
}
