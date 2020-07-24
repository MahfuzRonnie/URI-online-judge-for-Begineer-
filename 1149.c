#include<stdio.h>
int main()
{
    int a,n,i,j=0;
    scanf("%d %d",&a,&n);
    while(n<0 || n==0)
        scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        j=j+a+i;
    }
    printf("%d\n",j);

    return 0;
}
