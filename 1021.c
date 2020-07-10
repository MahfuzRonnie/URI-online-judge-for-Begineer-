#include<stdio.h>
int main()
{
    int i,j,N;
    int ar[6]={100,50,20,10,5,2,};
    int br[6];
    scanf("%d",&N);
    printf("NOTAS: %d\n",N);
    for(i = 0;i < 6;i++){
        br[i] = N / ar[i];
        N = N % ar[i];
    }
    for(j = 0;j < 6;j++){
        printf("%d nota(s) de R$ %d,00\n",br[j],ar[j]);

    }
    return 0;


}
