#include <stdio.h>

int main() {
    
    int num1, num2, num3, num4, num5;
    
    printf("Digite cinco numeros: \n");
    scanf("%i %i %i %i %i", &num1, &num2, &num3, &num4, &num5);
    
    //mayor

if (num1>=num2 && num1>=num3 && num1>=num4 && num1>=num5)
    
    printf("El numero mayor es: %i \n", num1);
    
    else if (num2>=num1 && num2>=num3 && num2>=num4 && num2>=num5)
    
    printf("El numero mayor es: %i \n", num2);
    
    else if (num3>=num1 && num3>=num2 && num3>=num4 && num3>=num5)
    
    printf("El numero mayor es: %i \n", num3);
    
    else if (num4>=num1 && num4>=num2 && num4>=num3 && num4>=num5)
    
    printf("El numero mayor es: %i \n", num4);
    
    else 
    
    printf("El numero mayor es: %i \n", num5);
    
    //menor
    
    if (num1<=num2 && num1<=num3 && num1<=num4 && num1<=num5)
    
    printf("El numero menor es: %i \n", num1);
    
    else if (num2<=num1 && num2<=num3 && num2<=num4 && num2<=num5)
    
    printf("El numero menor es: %i \n", num2);
    
    else if (num3<=num1 && num3<=num2 && num3<=num4 && num3<=num5)
    
    printf("El numero menor es: %i \n", num3);
    
    else if (num4<=num1 && num4<=num2 && num4<=num3 && num4<=num5)
    
    printf("El numero menor es: %i \n", num4);
    
    else 
    
    printf("El numero menor es: %i \n", num5);
    
    
    
    return 0; 
} 
