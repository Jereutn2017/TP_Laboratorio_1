#include "funciones.h"


int sumaOpr(int num1, int num2)
{
    int resultado;
    resultado= num1 + num2;
    return resultado;

}
int restaOpr(int num1, int num2)
{
    int resultado;
    resultado= num1 - num2;
    return resultado;

}

int multiplicacionOpr(int num1, int num2)
{
    int resultado;
    resultado= num1 * num2;
    return resultado;
}

float divisionOpr(float num1, float num2)
{
    float resultado;
    if(num2 == 0)
    {
        printf("\t La division entre cero no esta permitida.\n ");

    }
    else
    {
        resultado = num1/num2;

    }
        return resultado;
}


int factorialOpr(int num1)
{
    int z;
    int resultado = 1;
    for (z = num1; z > 1 ; z--)
    {
        resultado = resultado * z;

    }
    return resultado;
}





