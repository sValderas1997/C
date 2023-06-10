#include<stdio.h>

float datoA,datoB;    //Declarar variables
float suma, resta, mult, div, mod;

int main()
{

    printf("Ingrese Dato A: ");
    scanf("%f", &datoA);//ingreso de variables por parte del usuario
    printf("Ingrese Dato B: ");
    scanf("%f", &datoB);
    printf("\nDatoA= %.3f  DatoB= %.3f    ",datoA,datoB);
    suma= datoA+datoB;
    resta= datoA-datoB;
    mult= datoA*datoB;
    div= datoA/datoB;
    printf("\nLa suma es %.2f", suma);
    printf("\nLa resta es %.1f", resta);
    printf("\nLa multiplicacion es %.3f", mult);
    printf("\nLa division es %.2f\n", div);



}
