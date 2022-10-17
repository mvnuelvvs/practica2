#include <stdio.h>
#include <string.h>

int main() {
    
    int dias, edad, costoenfermedad;
    char enfermedad [20]; 
    float costoedad;
    
    printf("Ingrese su tipo de enfermedad: \n");
    gets (enfermedad);
    
    printf("Ingrese los dias hospitalizado: \n");
    scanf("%i", &dias);
    
    printf("Ingrese su edad: \n");
    scanf("%i", &edad);
    
    
    if(strcmp(enfermedad,"diabetes")==0)
    costoenfermedad=dias*1300;
    else if (strcmp(enfermedad,"hipertension")==0)
    costoenfermedad=dias*900;
     else if (strcmp(enfermedad,"cancer")==0)
    costoenfermedad=dias*2200;
    else
    printf ("Enfermedad no reconocida");
    
    
    if(edad>=14 && edad<=22)
    costoedad=costoenfermedad*(1.1);
    else
    costoedad=costoenfermedad;
    
    printf("El costo total sera de: $ %.2f",costoedad);
    
    
    return 0; 
} 
