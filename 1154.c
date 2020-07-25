#include<stdio.h>
int main()
{
    int a,n=0;
    float avg,j=0;
    while(1)
    {
        scanf("%d",&a);
        if(a<0)
            break;
        n+=a;
        j++;
    }
    avg=n/j;
    printf("%.2f\n",avg);
    return 0;
}
