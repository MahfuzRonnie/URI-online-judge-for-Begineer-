#include<stdio.h>
int main()
{
    int i,j=0;
    float n,N[3],avg;
    while(1)
    {
        scanf("%f",&n);
        if(n>=0 && n<=10)
        {
            N[j]=n;
            j++;
        }
        else
            printf("nota invalida\n");
        if(j>1)
            break;
    }
    avg=(N[0]+N[1])/2.0;
    printf("media=%.2f\n",avg);
    return 0;
}
