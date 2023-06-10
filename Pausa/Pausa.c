//----------------------------------------------Zona de directivas
#include<stdio.h>
#include<time.h> //libreria de tiempo
//----------------------------------------------Zona de Funciones
void ingreso(void);
void operaciones(void);
void resultado(void);
void pausa(unsigned int mili);
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

    goto inicio;

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
    pausa(5000);//pausa de 5000ms(o 5s)
    printf("\nLa resta es %.1f", resta);
    pausa(5000);
    printf("\nLa multiplicacion es %.3f", mult);
    pausa(5000);
    printf("\nLa division es %.2f\n\n", div);
    system("pause");
    system("cls");
}

////////////////////////////////////////////////////////////////////////////
void pausa(unsigned int mili)
{
    clock_t g= mili +clock();
    while (g>clock());

}
