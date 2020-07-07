#include<stdio.h>
int main()
    {
        float A,B,C;
        double pi, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
        scanf("%f %f %f",&A,&B,&C);
        pi = 3.14159;
        TRIANGULO = .5 * A * C;
        CIRCULO = pi * (C*C);
        TRAPEZIO = (A+B)/2*C;
        QUADRADO = B*B;
        RETANGULO = A*B;
        printf("TRIANGULO: %0.3lf\n",TRIANGULO);
        printf("CIRCULO: %0.3lf\n",CIRCULO);
        printf("TRAPEZIO: %0.3lf\n",TRAPEZIO);
        printf("QUADRADO: %0.3lf\n",QUADRADO);
        printf("RETANGULO: %0.3lf\n",RETANGULO);
        return 0;
    }

