#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 20

int main()
{
    char seguir='s';
    int opcion=0;
    int dni;
    int i;
    ePersona persona[TAM];

    //Inicializo los estados en 0
    for (i=0;i<TAM;i++)
    {
        persona[i].estado=0;
    }

    while(seguir=='s')
    {

        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                obtenerEspacioLibre(persona,TAM);
                altaPersona(persona,TAM);
                break;
            case 2:
                printf("ingrese un dni");
                scanf("%d",&dni);
                dni =buscarPorDni(persona,dni,TAM);
                borrarPersonas(persona,TAM,dni);
                break;
            case 3:
                ordenarPersonas(persona,TAM);
                imprimirPersonas(persona,TAM);
                break;
            case 4:
                 mostrarGrafico (persona,TAM);
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}






