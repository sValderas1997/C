#include<stdio.h>

int datoA,datoB;    //Declarar variables
int suma, resta, mult, div, mod; // declarar las operaciones

int main()
{
    datoA=10;
    datoB=3;
    printf("<Programacion Grafica 2020>\n");
    printf("\nDatoA= %d  DatoB= %d    ",datoA,datoB);
    suma= datoA+datoB;
    resta= datoA-datoB;
    mult= datoA*datoB;
    div= datoA/datoB;
    mod= datoA%datoB;
    printf("\nLa suma es %d", suma);
    printf("\nLa resta es %d", resta);
    printf("\nLa multiplicacion es %d", mult);
    printf("\nLa division es %d", div);
    printf("\nEL modulo es %d\n", mod);


}
