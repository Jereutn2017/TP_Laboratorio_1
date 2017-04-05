#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int x,y;
    int suma, resta, multiplicacion, factorial;
    float division;
    char seguir='s';
    int opcion=0;
    int Op1 = 0;
    int Op2 = 0;

    while(seguir=='s')
    {
        if (Op1 != 1)
        {
            printf("1- Ingresar 1er operando (A=x)\n");
        }
        else
        {
            printf("1- Operador ingresado (A=%d)\n", x);
        }
        if (Op2 != 2)
        {
            printf("2- Ingresar 2do operando (B=y)\n");
        }
        else
        {
            printf("2- Operador ingresado (B=%d)\n", y);
        }
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            printf("Ingrese el operando:");
            scanf("%d",&x);
            Op1 = 1;
            break;
        case 2:
            printf("Ingrese el operando:");
            scanf("%d",&y);
            Op2= 2;
            break;
        case 3:
            suma= sumaOpr(x,y);
            printf("\t La suma es %d\n", suma);
            system("pause");
            break;
        case 4:
            resta= restaOpr(x,y);
            printf("\t La resta es %d\n", resta);
            system("pause");
            break;
        case 5:
            division = divisionOpr(x,y);
            if (y != 0)
            {
                printf("\t La division es %.2f\n", division);
            }
            system("pause");
            break;
        case 6:
            multiplicacion = multiplicacionOpr(x,y);
            printf("\t La multiplicacion es %d\n", multiplicacion);
            system("pause");
            break;
        case 7:
            factorial = factorialOpr(x);
            printf("\t El factorial de A es %d\n", factorial);
            system("pause");
            break;
        case 8:
            suma= sumaOpr(x,y);
            printf("\t La suma es %d\n", suma);

            resta= restaOpr(x,y);
            printf("\t La resta es %d\n", resta);

            division = divisionOpr(x,y);
            if (y != 0)
            {
                printf("\t La division es %.2f\n", division);
            }

            multiplicacion = multiplicacionOpr(x,y);
            printf("\t La multiplicacion es %d\n", multiplicacion);

            factorial = factorialOpr(x);
            printf("\t El factorial de A es %d\n\n", factorial);
            system("pause");
            break;
        case 9:
            seguir = 'n';
            break;
        }
    }

    return 0;
}
