#include <stdio.h>
#define sueldob 7000

int main()

{
    int ventas;
    
    printf("Ingresa el total de ventas: \n");
    scanf("%i",&ventas);
    

    if (ventas<1000)
    printf ("Sueldo total sera de: %d ", sueldob);
    
    else if (ventas>=1000 && ventas<=2999)
    printf ("Sueldo total sera de: %.2f ", sueldob+(ventas*0.05));
    
    else if (ventas>=3000 && ventas<=4999)
    printf ("Sueldo total sera de: %.2f ", sueldob+(ventas*0.06));
    
    else if (ventas>=5000 && ventas<=6999)
    printf ("Sueldo total sera de: %.2f ", sueldob+(ventas*0.07));
    
    else 
    printf ("Sueldo total sera de: %.2f ", sueldob+(ventas*0.08));
    
    return 0;
}
