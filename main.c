#include <stdio.h>
#include <stdlib.h>

int main()
{
    float edad;
    int i=0;
    float acumuladorEdad=0;
    float promedio;
    int continuar=1;
    do
    {
        printf("\nIngrese su edad: ");
        scanf("%f",&edad);
        acumuladorEdad = acumuladorEdad + edad;
        i++;
        printf("Desea continuar? (1/0)");
        scanf("%d",&continuar);
    }
    while(continuar!= 0);
    promedio = acumuladorEdad / i;
    printf("\nEl promedio de las edades es de : %.2f",promedio);
    return 0;
}
