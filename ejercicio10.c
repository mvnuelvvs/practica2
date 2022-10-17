#include <stdio.h>
#include <math.h>

int main()
{
float cal1, cal2, cal3, cal4, cal5, prom, aprob;
double reprob;

printf("Ingrese la calificacion del primer examen: \n");
scanf("%f",&cal1);

printf("Ingrese la calificacion del segundo examen: \n");
scanf("%f",&cal2);

printf("Ingrese la calificacion del tercer examen: \n");
scanf("%f",&cal3);

printf("Ingrese la calificacion del cuarto examen: \n");
scanf("%f",&cal4);

printf("Ingrese la calificacion del quinto examen: \n");
scanf("%f",&cal5);

prom=(cal1+cal2+cal3+cal4+cal5)/5;

    if (prom>=6)

    printf("Aprobado \n");

    else

    printf("Reprobado \n");


    if (prom>=6)

    printf("La calificacion es: %.2f \n",round(prom));

    else

    printf("La calificacion es: %.2f \n",trunc(prom));

return 0;
}