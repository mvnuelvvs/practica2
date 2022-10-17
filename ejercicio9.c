#include <stdio.h>

int main()
{

int año, mult4, mult100, mult400 ;

printf("Ingrese el año: \n");
scanf("%i",&año);

mult4=año%4;
mult100=año%100;
mult400=año%400;


    if (mult4==0 && mult100!=0)
    printf("Es un año bisiesto \n");

    else if (mult100==0 && mult400==0)
    printf("Es un año bisiesto \n");

    else
    printf("No es año bisiesto \n");

return 0;
}