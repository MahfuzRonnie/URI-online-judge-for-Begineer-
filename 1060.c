#include<stdio.h>
int main()
{
    int i,n=0;
    float a;
    for(i=0; i<6; i++)
    {
        scanf("%f",&a);
        if(a>=0)
            n++;
    }
    printf("%d valores positivos\n",n);

    return 0;
}
