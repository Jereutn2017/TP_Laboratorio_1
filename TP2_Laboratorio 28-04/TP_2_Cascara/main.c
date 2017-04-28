#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include <conio.h>

#define ZZ 20


int main()
{
    ePersona datos[ZZ];
    inicioPersona(datos, ZZ);
    char seguir='s';
    int i,flagCarga=0, flagEd=0;
    char auxLet[50], auxDni[50], auxEdad[50], auxOp[50];


    while(seguir=='s')
    {
        int opcion=0;
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por nombre\n");
        printf("4- Imprimir grafico de edades\n");
        printf("5- Salir\n");

        printf("Seleccione una opcion: ");
        gets(auxOp);
        while (validaNum(auxOp)!=1)
        {
            printf("Dato invalido, se ingreso una letra!!\n ");
            printf("Seleccione una opcion: ");
            gets(auxOp);

        }
        opcion= atoi(auxOp);

        switch(opcion)
        {
        case 1:
            flagCarga=0;
            for(i=0; i<ZZ; i++)
            {

                if (datos[i].estado!=1)
                {

                    printf("Ingrese el nombre: ");
                    fflush(stdin);
                    gets(auxLet);
                    while (validarLetras(auxLet)!=1)
                    {
                        printf("Dato invalido, se ingreso un numero!!\n ");
                        printf("Ingrese el nombre: ");
                        fflush(stdin);
                        gets(auxLet);

                    }
                    printf("Ingrese su DNI: ");
                    gets(auxDni);

                    while (validaNum(auxDni)!=1)
                    {
                        printf("Dato invalido, se ingreso una letra!!\n ");
                        printf("Ingrese el DNI: ");
                        gets(auxDni);

                    }
                    datos[i].dni= atoi(auxDni);
                    printf("Ingrese su edad: ");
                    gets(auxEdad);

                    while (validaNum(auxEdad)!=1)
                    {
                        printf("Dato invalido, se ingreso una letra!!\n ");
                        printf("Ingrese la Edad: ");
                        gets(auxEdad);

                    }
                    datos[i].edad= atoi(auxEdad);


                    strcpy(datos[i].nombre,auxLet);
                    datos[i].estado=1;
                    mostrarDatos(datos[i]);
                    flagCarga=1;
                    break;

                }
            }
            if (flagCarga!=1)
            {
                printf("No hay mas espacio para cargar datos!!\n\n");
            }
            system("pause");
            break;
        case 2:
            borraPersona(datos,ZZ);
            system("pause");
            break;
        case 3:
            ordenarLista(datos,ZZ);
            listaPersona(datos,ZZ);
            system("pause");
            break;
        case 4:
            flagCarga=0;
            for(i=0; i<ZZ; i++)
            {

                if(datos[i].edad<= 18)
                {
                    printf("| * |");
                }
                else if(datos[i].edad>=19 && datos[i].edad<=35)
                {
                    flagEd=1;

                    printf("\t| * |");
                }
                else if(datos[i].edad>35)
                {
                    if(flagEd!=1)
                        printf("\t\t | * |");
                    if(flagEd!=0)

                        printf("\t| * |");
                }
                printf("\n");
            }

            printf("\n |<18\t19-35\t>35\n\n");
            flagCarga=1;
            if (flagCarga!=1)
            {
                printf("\n No hay datos en la base!! \n");
            }
            system("pause");
            break;
        case 5:

            printf("\nCerrando programa, presione una tecla para continuar...\n");
            seguir ='n';
            break;

        default:
            printf("\nLa opcion ingresada no es valida, por favor reingrese: \n\n");

            break;

        }

        system("cls");

    }

    return 0;
}







