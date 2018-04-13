#include <stdio.h>
#include <stdlib.h>
#include "CalcLyb.h"


int main()
{
    char seguir='s';
    int opcion=0;
    int x;
    int y;

    getInt("Ingrese el primer operando\n","Error. Fuera de rango\n",2,-45000,45000,&x);
    getInt("Ingrese el segundo operando\n","Error. Fuera de rango\n",2,-45000,45000,&y);

    while(seguir=='s')
    {
        printf("1- Calcular la suma\n");
        printf("2- Calcular la resta\n");
        printf("3- Calcular la division\n");
        printf("4- Calcular la multiplicacion\n");
        printf("5- Calcular el factorial de cada operando\n");
        printf("6- Calcular todas las operaciones\n");
        printf("7- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                suma(x,y);
                break;
            case 2:
                resta(x,y);
                break;
            case 3:
                division(x,y);
                break;
            case 4:
                multiplicacion(x,y);
                break;
            case 5:
                factorial(x,y);
                break;
            case 6:
                suma(x,y);
                resta(x,y);
                division(x,y);
                multiplicacion(x,y);
                factorial(x,y);
                break;
            case 7:
                seguir = 'n';
                break;
        }
    }
return 0;
}
