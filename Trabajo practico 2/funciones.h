#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}ePersona;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @param el tamaño del array.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(ePersona lista[], int tam);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @param el tamaño del array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(ePersona lista[], int dni, int tam);

/** \brief Elimina la persona seleccionada de la lista
 *
 * \param Lista el array.
 * \param tamaño del array
 * \param el DNI de la persona a borrar
 */
void borrarPersonas(ePersona lista[], int tam, int dni);

/** \brief Pide los datos de las personas
 *
 * \param array de personas
 * \param el tamaño del array
 *
 */
void altaPersona (ePersona persona[], int);

/** \brief imprime el listado de personas
 *
 * \param array de personas
 * \param tamaño del array
 *
 */
void imprimirPersonas(ePersona persona[],int);

/** \brief presenta un grafico de barras que separa por franja etaria
 *
 * \param array de personas
 * \param tamaño del array
 *
 */
void mostrarGrafico (ePersona persona[],int tam);

/** \brief Ordena en orden alfabetico los nombres
 *
 * \param array de personas
 * \param tamaño del array
 *
 */

void ordenarPersonas(ePersona persona[],int tam);

#endif // FUNCIONES_H_INCLUDED
