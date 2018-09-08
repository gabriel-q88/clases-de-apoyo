#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 5//<---es una variable que se reemplaza con el 50...

int main()
{
    int misNumeros[CANTIDAD];
    int i;
    int indice;
    //int nuevoValor;
    int numeroMayor;

    for(i = 0; i<CANTIDAD; i++)
    {
        printf("INgrese un numero: ");
        scanf("%d",&misNumeros[i]);//o tambien--->("%d,misnumero+1")
        printf("ingresado el numero en indice %d: %d\n",i,misNumeros[i]);

    }



    for(i = 0; i<CANTIDAD; i++) //--->para mostrar a carga secuencial en el indice...
    {
        printf("\nLos valores ingresados son %d: %d ",i + 1,misNumeros[i]);
    }
    printf("Ingresado un numero del 1 al %d: ",CANTIDAD);
    scanf("%d",&indice);


    if (indice<= CANTIDAD && i >= 1)
    {
        printf("Numero: %d ",misNumeros[indice -1]);
    }

    numeroMayor = misNumeros[0];

    for(i = 0; i<CANTIDAD; i++)
    {
        if(i==0)
        {
            numeroMayor = misNumeros[i];
        }
        if(misNumeros[i] > numeroMayor)
        {
            numeroMayor = misNumeros[i];
        }
        if(i==CANTIDAD - 1)
        {
            printf("Ultima Vuelta!!");
        }
    }

    void insertSort(int aray[], int size);//funcion para ordenamiento...
    {
        int i,j,auxiliar;
        for(i=1,i < size; i++)
        {
            auxiliar = array[i];
            j= i;
            while(j>0 && auxiliar < array[j-1])
            {
                array = array[j-1];
                j--;
            }
            array[j]= auxiliar;
        }
    }
    return 0;
}
