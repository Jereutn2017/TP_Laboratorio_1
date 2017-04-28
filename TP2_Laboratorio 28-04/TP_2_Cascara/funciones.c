#include "funciones.h"
#include  <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>



void inicioPersona(ePersona espacio[], int disp)
{
    int i;
    for (i=0; i<disp; i++)
    {
        espacio[i].estado=0;
    }
}

int validarLetras (char words[])
{
    int n=0;
    while (words[n]!='\0')
    {
        if ((words[n]<'a' || words[n]>'z') && (words[n]<'A' || words[n]>'Z') && (words[n]=' '))
        {
            return 0;
        }
        else
        {
            n++;
        }
    }
    return 1;
}

int validaNum (char number[])
{
    int l=0;
    while (number[l]!='\0')
    {
        if (number[l]<'0' || number[l]>'9')
        {
            return 0;
        }
        else
        {
            l++;
        }
    }
    return 1;
}


void borraPersona (ePersona datos[], int tamDni)
{
    int i, auxDni, flagCarga=0;
    char afirmacion='s';



    for(i=0; i<tamDni; i++)
    {

        mostrarDatos(datos[i]);
        printf(" Ingrese el DNI de la persona a eliminar: ");
        scanf("%d", &auxDni);
        if (datos[i].estado!=0 && auxDni==datos[i].dni)
        {

            printf("\nEsta seguro de eliminar el dato ? s/n\n");
            afirmacion= getche();
            if (afirmacion=='s')
            {
                printf("\n Datos Borrados!! \n\n");
                datos[i].estado=0;

            }
            else
            {
                printf("\n Accion cancelada por el usuario!! \n\n");
             break;
            }

            flagCarga=1;
            break;

        }
    }
    if (flagCarga!=1)
    {
        printf("\nLa persona no existe o fue eliminada!! \n\n");

    }

}


void mostrarDatos (ePersona losDatos)
{
        printf("\n %s\t\t %d\t\t %d\n\n", losDatos.nombre, losDatos.dni, losDatos.edad);
}

void listaPersona (ePersona datos[], int cargaEst)
{
    int i;
    printf("\n Nombre\t\t Dni\t\t Edad\n");
    for (i=0 ; i<cargaEst ; i++)
    {
        if (datos[i].estado!=0)
        {
            mostrarDatos(datos[i]);
        }
    }
}
void ordenarLista(ePersona datos[], int tamNombre)
{
    int i, j;
    ePersona auxNom;

    for (i=0; i<tamNombre-1; i++)
    {
        for (j=i+j; j<tamNombre; j++)
        {
            if(strcmp(datos[i].nombre, datos[j].nombre)>0)
            {
                auxNom = datos[i];
                datos[i]= datos [j];
                datos[j] = auxNom;
            }

        }

    }
}

