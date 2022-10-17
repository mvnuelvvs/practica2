#include <stdio.h>
#define tarifa1000 1.2
#define tarifa1850 1
#define tarifa1851 0.9

int main()
{

int ce;

printf("Ingrese el gasto de corriente electrica: \n");
scanf("%i", &ce);

    if (ce>0 && ce<1000)
    printf("Usted tendra que pagar: $ %.2f \n", ce*tarifa1000 );

    else if (ce>=1000 && ce<=1850)
    printf("Usted tendra que pagar: $ %d \n", ce*tarifa1850 );

    else if (ce>1850)
    printf("Usted tendra que pagar: $ %.2f \n", ce*tarifa1851 );

    else
    printf("Gasto de corriente electrica incorrecto \n");


return 0;
}