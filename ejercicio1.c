#include <stdio.h>
 
int main()

{

int num; float numdiv;

printf("Ingrese un numero entero: \n");
scanf("%i",&num);

numdiv=num%2;

    if (numdiv==0)

    printf("El numero es par \n");

    else 
{
    printf("El numero en impar \n");
}

return 0;
 }
