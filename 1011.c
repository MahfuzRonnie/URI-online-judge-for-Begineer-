#include<stdio.h>
#define Pi 3.14159
int main()
{
    double VOLUME,R;
    scanf("%lf",&R);
    VOLUME = (4.0/3)*Pi*(R*R*R);
    printf("VOLUME = %0.3lf\n",VOLUME);
    return 0;
}
