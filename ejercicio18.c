#include <stdio.h>

int main() {
    
    int d,m,a;

    printf("Ingrese una fecha: \n");
    scanf("%i %i %i",&d, &m ,&a);
    
    switch(m) {
        case 1 : printf("%i Enero %i \n", d, a); break;
        case 2 : printf("%i Febrero %i \n", d, a); break;
        case 3 : printf("%i Marzo %i \n", d, a); break;
        case 4 : printf("%i Abril %i \n", d, a); break;
        case 5 : printf("%i Mayo %i \n", d, a); break;
        case 6 : printf("%i Junio %i \n", d, a); break;
        case 7 : printf("%i Julio %i \n", d, a); break;
        case 8 : printf("%i Agosto %i \n", d, a); break;
        case 9 : printf("%i Septiembre %i \n", d, a); break;
        case 10 : printf("%i Octubre %i \n", d, a); break;
        case 11:  printf("%i Noviembre %i \n", d, a); break;
        case 12 : printf("%i Diciembre %i \n", d, a); break;
        }

    return 0; 
} 
