#include<stdio.h>
int main()
{
    int i;
    float s=0,j=1.0;
    for(i=1;i<=39;i+=2)
    {
        s+=(i/j);
        j=(j+j);
    }
    printf("%.2f\n",s);
    return 0;
}
