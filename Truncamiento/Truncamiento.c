#include<stdio.h>

float datoA,datoB;    //Declarar variables
float suma, resta, mult, div, mod;

int main()
{
    datoA=10.15;
    datoB=3.2;
    printf("<Programacion Grafica 2020>\n");
    printf("\nDatoA= %.3f  DatoB= %.3f    ",datoA,datoB); //Se podra tener un numero son solo 3 decimas
    suma= datoA+datoB;
    resta= datoA-datoB;
    mult= datoA*datoB;
    div= datoA/datoB;
    printf("\nLa suma es %.2f", suma);//Se podra tener un numero son solo 2 decimas
    printf("\nLa resta es %.1f", resta);//Se podra tener un numero son solo 1 decimas
    printf("\nLa multiplicacion es %.3f", mult);
    printf("\nLa division es %.2f\n", div);



}
