#include <stdio.h>

int main() {
    
    int a, b;
    float resultado;
    char op;
    
    printf("Digite su operacion: \n");
    scanf("%d %c %d", &a, &op,  &b);
    
    switch(op) {
        case '+' : resultado=a+b;
        break;
        case '*' : resultado=a*b;
        break;
        case '/' : resultado=(float)a/(float)b;
        break;
        case '%' : resultado=a%b;
        break;
        }
        
    printf("El resultado es: %.2f \n", resultado);  
       
    return 0; 
} 
