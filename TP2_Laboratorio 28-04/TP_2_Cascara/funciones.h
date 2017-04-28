#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}ePersona;

/** \brief Inicializa lo estados que estan en 0 en la estructura
 *
 * \param Pide la variable de la estructura
 * \param Pide el valor tamaño maximo del array
 *
 */

void inicioPersona(ePersona[], int);

/** \brief Muestra los datos de la persona cargada
 *
 * \param Muetras los datos cargados dentro de la variable de la estructura
 *
 */

void mostrarDatos (ePersona losDatos);

/** \brief Realiza un listado de las personas cargadas
 *
 * \param Pide la variable de la estructura
 * \param Pide el valor maximo del array
 *
 */

void listaPersona (ePersona datos[], int tamNombre);

/** \brief Ordena a las personas por orden alfabetico
 *
 * \param Pide la variable de la estructura
 * \param Pide el valor maximo de la estructura
 *
 */

void ordenarLista(ePersona[], int);


/** \brief Pide un string y valida que en la carga solo haya letras
 *
 * \param Pide un string de tipo char
 * \return Si la funcion retorna 0, si la cadena tiene solo letras
 *
 */

int validarLetras (char name[]);


/** \brief Pide un string y valida que en la carga solo haya numero
 *
 * \param Pide un string de tipo char
 * \return Si la funcion retorna 1 si esta validada, sino retorna 0
 */
int validaNum (char number[]);


/** \brief Borra los datos de la persona deseada a traves del numero de DNI
 *
 * \param Pide la variable de la estructura
 * \param Pide el valor maximo de array
 *
 */

void borraPersona (ePersona datos[], int tamDni);
#endif // FUNCIONES_H_INCLUDED
