#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,e,suma,promedio;
    printf("Programa para el calculo del promedio de cinco notas\n");
    printf("Nota1 = ");
    scanf("%f",&a);
    printf("Nota2 = ");
    scanf("%f",&b);
    printf("Nota3 = ");
    scanf("%f",&c);
    printf("Nota4 = ");
    scanf("%f",&d);
    printf("Nota5 = ");
    scanf("%f",&e);
    suma=a+b+c+d+e;
    promedio=suma/5;
    printf("El promedio es: %f",promedio);
    return 0;
}
