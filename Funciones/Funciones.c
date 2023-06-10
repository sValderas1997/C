//----------------------------------------------Zona de directivas
#include<stdio.h>
//----------------------------------------------Zona de Funciones
void ingreso(void); //se ingresa las funciones las cuales contendran unos codigos en especifico en su respectiva zona
void operaciones(void);
void resultado(void);
//----------------------------------------------Zona de Variables
float datoA,datoB;    //Declarar variables
float suma, resta, mult, div, mod;
//----------------------------------------------Zona main()
int main()
{
    inicio:
    ingreso();
    operaciones();
    resultado();

    goto inicio;   //se reinicia el codigo desde donde se diga inicio

}
/////////////////////////////////////////////////////////////////

void ingreso(void)
{
    printf("Ingrese Dato A: ");
    scanf("%f", &datoA);
    printf("Ingrese Dato B: ");
    scanf("%f", &datoB);
    printf("\nDatoA= %.3f  DatoB= %.3f    ",datoA,datoB);
}
////////////////////////////////////////////////////////////////////////

void operaciones(void)
{
    suma= datoA+datoB;
    resta= datoA-datoB;
    mult= datoA*datoB;
    div= datoA/datoB;
}

/////////////////////////////////////////////////////////////////////////////

void resultado(void)
{
    printf("\nLa suma es %.2f", suma);
    printf("\nLa resta es %.1f", resta);
    printf("\nLa multiplicacion es %.3f", mult);
    printf("\nLa division es %.2f\n\n", div);
}
