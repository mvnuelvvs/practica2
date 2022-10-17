#include <stdio.h>
#define menos14min 10
#define minutoad 5

int main()
{

float minutos, operacion;

printf("Ingrese los minutos que duro su llamada \n");
scanf("%f",&minutos);

operacion=(10+((minutos-13)*minutoad));

    if (minutos>0 && minutos<13.59)

    printf("La cantidad a pagar es de: $ %.2f \n", minutos*menos14min);

    else if (minutos>13)

    printf("La cantidad a pagar es de: $ %.2f \n",operacion);

    else 

    printf("Los minutos de la llamada ingresados son incorrectos\n");

return 0;
}