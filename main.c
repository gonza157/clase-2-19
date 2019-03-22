#include <stdio.h>
#include <stdlib.h>


int main()
{
int numero,mayor,menor;
do{

    printf("ingresa un numero, si queres salir ingresa -1\n");
    scanf("%d",& numero);
    if(numero !=-1 && numero>mayor)
    {
        mayor= numero;
    }else if(numero !=-1 && numero<menor)
    {
    printf("paso");
        menor=numero;
    }
    }while(numero !=-1);
    printf("El numero mayor es: %d\n",mayor);
    printf("El numero menor es: %d",menor);
    return 0;
}


