#include "funciones.h"
#include <stdio.h>

int obtenerEspacioLibre(ePersona lista[],int tam)
{
    int i;
    int aux;

    for(i=0;i<tam;i++)
    {
        if (lista[i].estado==0)
        {
            aux = i;
        }
    }
    return aux;
}


int buscarPorDni(ePersona lista[],int dni, int tam)
{
    int i;



    for (i=0;i<tam;i++)
    {
        if (lista[i].estado==1 && lista[i].dni == dni)
        {
            printf("Este es el usuario\n%s\t%d\t%d\n",lista[i].nombre,lista[i].edad,lista[i].dni);
        }
    }
    return dni;
}

void borrarPersonas(ePersona lista[], int tam, int dni)
{
    char rta;
    int i;
    for (i=0;i<tam;i++)
    {
        if (lista[i].estado==1 && lista[i].dni == dni)
        {
            printf("Desea eliminarlo? <s/n>\n");
            rta = getch();
            if (rta == 's')
            {
                lista[i].estado = 0;
            }
        }
    }
}

void altaPersona (ePersona persona[], int tam)
{
    int i;

    i =obtenerEspacioLibre(persona,tam);
    persona[i].estado =1;
    printf("Ingrese nombre: ");
    fflush (stdin);
    gets (persona[i].nombre);
    printf("Ingrese edad: ");
    scanf("%d", &persona[i].edad);
    printf("Ingrese dni: ");
    scanf ("%d", &persona[i].dni);
}

void imprimirPersonas(ePersona persona[],int tam)
{
    int i;

    for (i=0;i<tam;i++)
    {
      if (persona[i].estado == 1)
      {
        printf("NOMBRE\tEDAD\tDNI\n%s\t%d\t%d\n",persona[i].nombre,persona[i].edad,persona[i].dni);
      }
    }
}

void mostrarGrafico (ePersona persona[],int tam)
{
    int i,cont1=0,cont2=0,cont3=0;
    int flag1=0 , flag2=0;
    int mayor;

    for (i=0;i<tam;i++)
    {
        if (persona[i].estado ==1)
        {
           if (persona[i].edad<19)
        {
            cont1++;
        }
        else
        {
          if (persona[i].edad >18 && persona[i].edad <36)
          {
              cont2++;
          }
          else
          {
              cont3++;
          }
        }
        }

    }

    if (cont1>= cont2 && cont1>=cont2)
    {
        mayor =cont1;
    }
        else
        {
            if (cont2>= cont1 && cont2>=cont3)
            {
                mayor =cont2;
            }
            else
                if (cont3>= cont1 && cont3>=cont2)
                {
                    mayor =cont3;
                }
        }

    for (i=mayor; i>0;i--)
    {
        if (i<=cont1)
        {
            printf("*");
            flag1=1;
        }
        if (i<=cont2)
        {
            printf("\t*");
            flag2=1;
        }
        if (i<=cont3)
        {
            if(flag2 ==0)
            {
                printf("\t\t*");
            }
            else
            {
                printf("\t*");
            }
        }
        printf("\n");
    }
    printf("<18\t19-35\t>35\n");
}

void ordenarPersonas(ePersona persona[],int tam)
{
    int i,j;
    ePersona auxString[50];
    int auxInt;

    for (i=0;i<tam-1;i++)
    {
        if (persona[i].estado ==1)
        {
            for (j=i+1;j<tam;j++)
            {
                if (persona[j].estado ==1)
                {
                    if (strcmp(persona[i].nombre,persona[j].nombre)>0)
                {
                    strcpy (auxString,persona[i].nombre);
                    strcpy (persona[i].nombre, persona[j].nombre);
                    strcpy (persona[j].nombre,auxString);

                    auxInt = persona[i].edad;
                    persona [i].edad = persona[j].edad;
                    persona[j].edad = auxInt;

                    auxInt = persona[i].dni;
                    persona [i].dni = persona[j].dni;
                    persona[j].dni = auxInt;
                }
                }
            }
        }
    }
}
