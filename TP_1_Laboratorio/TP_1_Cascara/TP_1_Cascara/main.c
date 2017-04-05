#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int x,y;
    int suma, resta, multiplicacion, factorial;
    float division;
    char seguir='s';
    int opcion= 0;
    int Op1= 0;
    int Op2= 0;
    int flagA=0;
    int flagB=0;

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
            printf("\t Ingrese el operando:\n\n");
            scanf("%d",&x);
            Op1 = 1;
            flagA= 1;
            break;
        case 2:
            printf("\t Ingrese el operando:\n\n");
            scanf("%d",&y);
            Op2= 2;
            flagB= 1;
            break;
        case 3:
            if (flagA== 1 && flagB== 1)
            {
                suma= sumaOpr(x,y);
                printf("\t La suma es %d\n\n", suma);
            }
            else
            {
                printf("\t Ingrese ambos operandos para realizar la operacion!!\n\n");
            }
            system("pause");
            break;
        case 4:
            if (flagA== 1 && flagB== 1)
            {
                resta= restaOpr(x,y);
                printf("\t La resta es %d\n\n", resta);
            }
            else
            {
                printf("\t Ingrese ambos operandos para realizar la operacion!!\n\n");
            }
            system("pause");
            break;
        case 5:
            if (flagA== 1 && flagB== 1)
            {
                division = divisionOpr(x,y);
                if (y != 0)
                {
                    printf("\t La division es %.2f\n\n", division);
                }
            }
            else
            {
                printf("\t Ingrese ambos operandos para realizar la operacion!!\n\n");
            }

            system("pause");
            break;
        case 6:
            if (flagA== 1 && flagB== 1)
            {
                multiplicacion = multiplicacionOpr(x,y);
                printf("\t La multiplicacion es %d\n\n", multiplicacion);
            }
            else
            {
                printf("\t Ingrese ambos operandos para realizar la operacion!!\n\n");
            }

            system("pause");
            break;
        case 7:
            if (flagA== 1)
            {
                factorial = factorialOpr(x);
                printf("\t El factorial de A es %d\n\n", factorial);
            }
            else
            {
                printf("\t Ingrese el operando A para realizar el factorial!!\n\n");
            }
            system("pause");
            break;
        case 8:
            if (flagA== 1 && flagB== 1)
            {
                suma= sumaOpr(x,y);
                printf("\t La suma es %d\n\n", suma);

                resta= restaOpr(x,y);
                printf("\t La resta es %d\n\n", resta);

                division = divisionOpr(x,y);
                if (y != 0)
                {
                    printf("\t La division es %.2f\n\n", division);
                }

                multiplicacion = multiplicacionOpr(x,y);
                printf("\t La multiplicacion es %d\n\n", multiplicacion);
            }
            else
            {
                printf("\t Ingrese ambos operandos para realizar las operaciones!!\n\n");
            }
            if (flagA== 1)
            {
                factorial = factorialOpr(x);
                printf("\t El factorial de A es %d\n\n", factorial);
            }
            else
            {
                printf("\t Ingrese el operando A para realizar el factorial!!\n\n");
            }
            system("pause");
            break;
        case 9:
            seguir = 'n';
            break;
        }
    }

    return 0;
}
