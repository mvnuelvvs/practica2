#include <stdio.h>

int main()
{

int num;
float divnum;

printf("Ingrese un numero entero: \n");
scanf("%i",&num);

divnum=num%7;

    if (divnum==0)

    printf("El numero es multiplo de 7 \n");

    else 

{
    printf("El numero no es multiplo de 7 \n");
}

return 0;
}