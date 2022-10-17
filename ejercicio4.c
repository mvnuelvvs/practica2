#include <stdio.h>

int main()
{

int num;

printf("Ingrese un numero de maximo tres digitos: \n");
scanf("%i",&num);

    if (num>=-9 && num<=9)

    printf("Numero con 1 digitos \n");

    else if (num>=-99 && num<=99)
{
    printf("Numero con 2 digitos \n");
}

    else if (num>=-999 && num<=999)
{
    printf("Numero con 3 digitos \n");
}

    else 

    printf("Numero invalido \n");


    if (num>0 && num<=999)

    printf("El numero es positivo \n");

    else if (num<0 && num>=-999)
{
    printf("El numero es negativo \n");
}

return 0;
}