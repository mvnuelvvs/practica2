#include <stdio.h>

int main() {
    
    int n;
    
    printf("Ingrese un numero del 1 al 10: \n");
    scanf("%i", &n);
    
    if (n>0 && n<=10) {
        
            switch (n) {
        
        case 1 : printf("I \n"); break;
        case 2 : printf("II \n"); break;
        case 3 : printf("III \n"); break;
        case 4 : printf("IV \n"); break;
        case 5 : printf("V \n"); break;
        case 6 : printf("VI \n"); break;
        case 7 : printf("VII \n"); break;
        case 8 : printf("IIX \n"); break;
        case 9 : printf("IX \n"); break;
        case 10 : printf("X \n"); break; }
    
    }
        else 
        printf("Numero invalido \n");
    
    return 0; 
} 
