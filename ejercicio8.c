#include <stdio.h>

int main()
{

char caracter, a, e, i, o, u;

printf("Ingrese un caracter: \n");
scanf("%c",&caracter);

    if (caracter=='a' || caracter=='A' || 
        caracter=='e' || caracter=='E' || 
        caracter=='i' || caracter=='I' || 
        caracter=='o' || caracter=='O' || 
        caracter=='u' || caracter=='U' )

    printf("El caracter es una vocal \n");

    else if (caracter>=48 && caracter<=57)

    //segun tabla ASCII

    printf("El caracter es un digito \n");

    else

    printf("El caracter no es ni un digito ni una vocal \n");

return 0;
}