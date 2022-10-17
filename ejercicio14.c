#include <stdio.h>

int main() {
    
    int d, m, a;
    
    printf("Ingresa una fecha: \n");
    scanf("%i %i %i", &d, &m, &a);
    
    if (a<0)
     printf("La fecha es incorrecta \n"); 
     
     else if (m<1 || m>12)
     printf("La fecha es incorrecta \n");
     
     else if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
        if (d<0 || d>31){
         printf("La fecha es incorrecta \n");}
        else 
        printf("La fecha es correcta \n");
    }

     else if (m==4 || m==6 || m==9 || m==11){
          if (d<0 || d>30){
         printf("La fecha es incorrecta \n");}
         else 
        printf("La fecha es correcta \n");
     }

     else if ("m==2") {
        if(((a%4)==0 && (a%100)!=0) || (a%400)==0){
            if (d>0 && d<=29)
            printf("La fecha es correcta \n");
            else 
            printf("La fecha es incorrecta \n");}
            
        else 
            if (d>0 && d<=28)
            printf("La fecha es correcta \n");
            else 
            printf("La fecha es incorrecta \n");
        }

    else 
    printf("La fecha es correcta \n");




    
    return 0; 
} 