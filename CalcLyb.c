#include <stdio.h>
#include <stdlib.h>
#include "CalcLyb.h"


int getInt(char* msg,char* msgE,int reTry,int minimum,int maximum,int* result)
{
    int retorno = -1;
    int aux;
    do
    {
        printf("%s",msg);
        scanf("%d",&aux);
        if(aux>=minimum && aux<=maximum)
        {
            *result = aux;
            retorno = 0;
            break;
        }
        printf("%s",msgE);
        reTry--;
    }while(reTry >= 0);
return retorno;
}



int suma(int primerOperando, int segundoOperando)
{
    int result;

    result = primerOperando + segundoOperando;

    printf("\nEl resultado de la suma es: %d\n\n",result);
return 0;
}



int resta(int primerOperando, int segundoOperando)
{
    int result;

    result = primerOperando - segundoOperando;

    printf("\nEl resultado de la resta es: %d\n\n",result);
return 0;
}



int division(int primerOperando, int segundoOperando)
{
    float result;
    float a, b;

    a = primerOperando;
    b = segundoOperando;

    result = a / b;

    printf("\nEl resultado de la division es: %.3f\n\n",result);
return 0;
}



int multiplicacion(int primerOperando, int segundoOperando)
{
    int result;

    result = primerOperando * segundoOperando;

    printf("\nEl resultado de la multiplicacion es: %d\n\n",result);
return 0;
}



int factorial(int primerOperando, int segundoOperando)
{
    int a;
    int fact1 = 1;
    int fact2 = 1;
    if (primerOperando>=0)
    {
        for(a=primerOperando;a>1; a--)
        {
            fact1 = fact1 * a;
        }
        printf("\nEl factorial del primer operando es: %d\n", fact1);
    }
    else
    {
        printf("\nEl factorial de un numero negativo no existe\n");
    }

    if (segundoOperando>=0)
    {
        for(a=segundoOperando;a>1; a--)
        {
            fact2 = fact2 * a;
        }
        printf("El factorial del segundo operando es: %d\n\n",fact2);
    }
    else
    {
        printf("El factorial de un numero negativo no existe\n\n");
    }
return 0;
}
