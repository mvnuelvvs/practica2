#include <stdio.h>

int main() {
    
    int d;
    
    printf("Digite un dia de la semana: \n");
    scanf("%i", &d);
    
    if (d>0 && d<=7) {
    
        switch(d){
            
            case 1 : printf("Lunes \n"); break;
            case 2 : printf("Martes \n"); break;
            case 3 : printf("Miercoles \n"); break;
            case 4 : printf("Jueves \n"); break;
            case 5 : printf("Viernes \n"); break;
            case 6 : printf("Sabado \n"); break;
            case 7 : printf("Domingo \n"); break;  }
        
        }
        
        else 
        printf("Valor incorrecto \n");
    
    
    return 0; 
} 