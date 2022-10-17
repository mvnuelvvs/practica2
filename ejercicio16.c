#include <stdio.h>

int main() {

int dn, mn, an, da, ma, aa, años;
int meses, dias;

    printf("Ingrese su fecha de nacimiento: \n");
    scanf("%i %i %i", &dn, &mn, &an);

    printf("Ingrese la fecha actual: \n");
    scanf("%i %i %i", &da, &ma, &aa);

        //años
        
        if(mn>=ma)
        años=(aa-an)-1;
        else
        años=(aa-an);
        
        //meses

        if(mn>ma)
        meses=((12-mn)+ma);

        else if(mn<ma && da<dn)
        meses=(ma-mn)-1;

        else if (mn==ma)
        meses=11;

        else
        meses=(ma-mn);
       

        //dias

      
        if(da>=dn)
        dias=da-dn;
        else 
        dias=((31-dn)+da);
      
        //resultado 


        if ((an>=1000 && aa>=1000) && (mn>0 && mn<=12 && ma>0 && ma<=12) && (dn>0 && dn<=31 && da>0 && da<=31)){
         
            if (an==aa)
            printf("Tienes %i meses y %i dias \n",meses,dias);
            else
            printf("Tienes %i años %i meses y %i dias \n", años,meses,dias);}
        
        else
        printf("Fecha incorrecta \n");
        

return 0;
}